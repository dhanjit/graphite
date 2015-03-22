from PyQt4 import QtGui
from src.Settings import *
from numpy import arange
from settingsTable import *

class Aggregator(QtGui.QWidget):
	models = []
	model_settings = []
	settings_Table = []
	functions = []
	settings_btn = []


	def __init__(self):
		super(Aggregator, self).__init__()
		#self.controller = controller  #Check gargbage collection. Causes problems.
		self.mainLayout = QtGui.QVBoxLayout()
		# self.mainLayout = QtGui.QListView()
		self.settings = Settings()
		self.initDomain()
		#self.initUI()


	def initUI(self,model):
		hbox = QtGui.QHBoxLayout()
		widget = QtGui.QWidget()
		function = QtGui.QCheckBox("Function")
		function.setStyleSheet("color: black; background-color: red; font: bold")
		function.setChecked(True)
		self.functions.append(function)
		btn = QtGui.QPushButton("Set")
		btn.setMaximumWidth(30)
		btn.setEnabled(True)
		self.settings_btn.append(btn)
		hbox.addWidget(function)
		hbox.addWidget(btn)
		groupbox = QtGui.QGroupBox()
		self.mainLayout.addLayout(hbox)
		self.mainLayout.addStretch(1)
		self.setLayout(self.mainLayout)

		self.connect(btn,QtCore.SIGNAL("clicked()"),self.showpop)
		self.connect(function,QtCore.SIGNAL("stateChanged(int)"),self.select)




	def addModel(self, model):
		self.models.append(model)
		self.initUI(model)
		self.setDefaultSetting()

	def initDomain(self, init={}):
		self.domain = init
		self.domain['x'] = arange(-5, 5, 0.25)
		self.domain['y'] = arange(-5, 5, 0.25)
		self.domain['z'] = arange(0.0, 3.0, 0.1)

	def genSelectedModelData(self):
		for model in self.models:
			if model.visible:
				data = model.eval(self.domain)
				yield data

	def clearSelection(self):
		for model in self.models:
			model.visible = False

	def selectModel(self, index):
		self.models[index].visible = True

	def showTable(self):
		for i in range(len(self.settings_btn)):
			if(self.sender()==self.settings_btn[i]):
				if(self.settings_Table[i].isVisible()):
					self.settings_Table[i].setVisible(False)
				else:
					self.settings_Table[i].setVisible(True)
		self.initUI()

	def showpop(self):
		for i in range(len(self.settings_btn)):
			if(self.sender()==self.settings_btn[i]):
				self.table = ModelSettingsTable(self.model_settings[i])

	def setDefaultSetting(self):
		set = Settings()
		set["Color"] = QtGui.QColor("red")
		set["Width"] = 1
		set["Line fill"] = "-"
		set["Transparency"] = 1.0
		self.model_settings.append(set)

	def select(self):
		for i in range(len(self.functions)):
			if self.functions[i].isChecked():
				self.settings_btn[i].setEnabled(True)
			else:
				self.settings_btn[i].setEnabled(False)

