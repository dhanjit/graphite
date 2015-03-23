# from mathtex.mathtex_main import Mathtex
# from mathtex.fonts import UnicodeFonts
from PyQt4 import QtGui, QtCore
from numpy import arange
from src.Settings import Settings
from src.ui.aggregator.settingsTable import *
import matplotlib.pyplot as plt

class Aggregator(QtGui.QWidget):
	def __init__(self, controller):
		super(Aggregator, self).__init__()

		self.models = []
		self.functions = []
		self.model_settings = []
		self.settings_btn = []

		self.currenttype = None
		self.mainLayout = QtGui.QVBoxLayout()
		self.controller = controller  # Check gargbage collection. Causes problems.
		self.settings = Settings()
		self.initDomain()
		
	def generateImage(self,latexString,fileName):
		latexString="$"+latexString+"$"
		fig = plt.figure()
		ax= fig.add_subplot(111)
		ax.text(0.0, 0.5,latexString,fontsize=150)
		ax.set_axis_off()
		plt.savefig(fileName)

	def initUI(self,model):
		hbox = QtGui.QHBoxLayout()
		# widget = QtGui.QWidget()
		latexString=model.getRenderedView()
		fileName = "resources/image"+str(len(self.models))+".png"
		self.generateImage(latexString,fileName)
		# function = QtGui.QCheckBox(latexString)
		function = QtGui.QCheckBox(str(model.expression))
		# function.setStyleSheet("background-image: url(:/"+fileName+";")

		function.setStyleSheet("color: black; background-color: red; font: bold")
		#function.setChecked(True)
		self.functions.append(function)
		btn = QtGui.QPushButton("Set")
		btn.setMaximumWidth(30)
		btn.setEnabled(True)
		self.settings_btn.append(btn)
		hbox.insertWidget(0,function)
		hbox.addWidget(btn)
		self.mainLayout.addLayout(hbox)
		self.mainLayout.addStretch(1)
		self.setLayout(self.mainLayout)

		self.connect(btn,QtCore.SIGNAL("clicked()"),self.showpop)
		self.connect(function,QtCore.SIGNAL("stateChanged(int)"),self.select)

	def addModel(self, model):
		self.models.append(model)
		self.initUI(model)
		self.setDefaultSetting(model.type)

	def initDomain(self, init={}):
		self.domain = init
		self.domain['x'] = arange(0.0, 3.0, 0.1)
		self.domain['y'] = arange(0.0, 3.0, 0.1)
		self.domain['z'] = arange(0.0, 3.0, 0.1)

	def clearSelection(self):
		for i in range(len(self.models)):
			self.models[i].visible = False
			self.functions[i].setChecked(False)

	def selectModel(self, index):
		self.models[index].visible = True
		self.functions[index].setChecked(True)

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
#		print self.models[0].expression
		return [ (self.models[i].getPlottable(type=self.currenttype, domain=self.domain), self.model_settings[i]) for i in range(0,len(self.models)) if self.models[i].visible ]

	def getPlottables(self):
		return [model.getPlottable(type=self.currenttype, domain=self.domain) for model in self.models if model.visible]

	def setDefaultSetting(self,type):
		if(type=="2D"):
			set = Settings()
			set["Color"] = QtGui.QColor("red").name()
			set["Width"] = 1
			set["Line Fill"] = "-"
			set["Line Style"] = ""
		elif(type=="3D"):
			set = Settings()
			set["Color"] = QtGui.QColor("red").name()
			set["Width"] = 1
			set["Shade"] = False
			set["rstride"] = 1
			set["cstride"] = 1

		self.model_settings.append(set)

	def showpop(self):
		for i in range(len(self.settings_btn)):
			if(self.sender()==self.settings_btn[i]):
				self.table = ModelSettingsTable(self.model_settings[i],self.models[i].type)
				self.table.exec_()
				self.controller.updateViewport()


	def select(self):
		for i in range(len(self.functions)):
			if self.functions[i].isChecked():
				self.settings_btn[i].setEnabled(True)
				self.models[i].visible=True
			else:
				self.settings_btn[i].setEnabled(False)
				self.models[i].visible=False
			self.controller.updateViewport()
