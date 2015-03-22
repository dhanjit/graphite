from PyQt4 import QtGui, QtCore
from numpy import arange
from src.Settings import Settings
from src.ui.aggregator.settingsTable import *

class Aggregator(QtGui.QWidget):
	models = []
	functions = []
	model_settings = []
	settings_btn = []

	def __init__(self, controller):
		super(Aggregator, self).__init__()
		self.currenttype = None
		self.mainLayout = QtGui.QVBoxLayout()
		self.controller = controller  # Check gargbage collection. Causes problems.
		self.settings = Settings()
		self.initDomain()

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
		self.domain['x'] = arange(0.0, 3.0, 0.1)
		self.domain['y'] = arange(0.0, 3.0, 0.1)
		self.domain['z'] = arange(0.0, 3.0, 0.1)

	def clearSelection(self):
		for model in self.models:
			model.visible = False

	def selectModel(self, index):
		self.models[index].visible = True
#		self.updateCurrentType()

	def updateCurrentType(self):
		is2D = [ model.type == '2D' for model in self.models if model.visible ]
		if all(is2D):
			self.currenttype = '2D'
		elif not any(is2D):
			self.currenttype = '3D'
		else:
			self.currenttype = False

	def getCurrentType(self, refresh=True, default=False):
		if refresh:
			self.updateCurrentType()
		return default if not self.currenttype else self.currenttype

	def getModels(self):
		return [model for model in self.models if model.visible]

	def getPlottablesSettings(self):
		return [ (self.models[i].getPlottable(type=self.currenttype, domain=self.domain), self.model_settings[i]) for i in range(0,len(self.models)) if self.models[i].visible ]

	def getPlottables(self):
		return [model.getPlottable(type=self.currenttype, domain=self.domain) for model in self.models if model.visible]

	def setDefaultSetting(self):
		setting = Settings()
		setting["Color"] = QtGui.QColor("red")
		setting["Width"] = 1
		setting["Line fill"] = "-"
		setting["Transparency"] = 1.0
		self.model_settings.append(setting)

	def showpop(self):
		for i in range(len(self.settings_btn)):
			if(self.sender()==self.settings_btn[i]):
				self.table = ModelSettingsTable(self.model_settings[i])


	def select(self):
		for i in range(len(self.functions)):
			if self.functions[i].isChecked():
				self.settings_btn[i].setEnabled(True)
			else:
				self.settings_btn[i].setEnabled(False)
