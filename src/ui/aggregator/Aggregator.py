# from mathtex.mathtex_main import Mathtex
# from mathtex.fonts import UnicodeFonts
from PyQt4 import QtGui, QtCore
from numpy import arange
from src.Settings import Settings
from src.ui.aggregator.settingsTable import *
import matplotlib.pyplot as plt
from src.ui.aggregator.LatexCanvas import *

class Aggregator(QtGui.QWidget):
	def __init__(self, controller):
		super(Aggregator, self).__init__()

		self.models = []
		self.functions = []
		self.model_settings = []
		self.settings_btn = []
		# self.filenames = []
		self.imagelabels = []
		self.currenttype = None
		self.mainLayout = QtGui.QVBoxLayout(self)
		self.mainLayout.setAlignment(Qt.AlignTop)
		self.mainLayout.setContentsMargins(0,0,0,0)
		self.mainLayout.setSpacing(10)
		self.setAutoFillBackground(True)
		# self.initAgg()


		self.controller = controller  # Check gargbage collection. Causes problems.
		self.settings = Settings()
		self.initDomain()


	def generateImage(self,model):
		print (model.type)
		latexString = model.getRenderedView()
		# filename = "resources/"+str(id(model))+".png"
		filename = "resources/image.png"
		latexString="$"+latexString+"$"#"$\\begin{verbatim}"+latexString+"\\end{verbatim}$"
		canvas = LatexCanvas()
		canvas.axes.text(-0.0, 0.5, latexString, fontsize=16)
		#canvas.axes.title(latexString,fontsize=16,color='black')
		canvas.axes.set_axis_off()
		return canvas

	def _restrictWidthToFit(self,scroll):
		fw = scroll.widget().sizeHint().height()
		sw = scroll.horizontalScrollBar().sizeHint().height()
		w = fw + sw + 5
		return w

	# def getImageLabel(self, filename, hbox):
	# 	imagelabel = QLabel()
	# 	pix = QPixmap(fig)
	# 	#imagelabel.setMaximumHeight(100)
	# 	imagelabel.setMaximumSize(QSize(200,40))
	# 	# scaledpix = pix.scaled(imagelabel.size(), Qt.KeepAspectRatio)
	# 	imagelabel.setPixmap(pix)
	# 	#imagelabel.setFixedSize(QSize(150,30))
	# 	return imagelabel


	def initUI(self,model):
		hbox = QtGui.QHBoxLayout()
		hbox.setContentsMargins(0,0,0,0)
		hbox.setSpacing(0)
		# widget = QtGui.QWidget()
		imagewidget = self.generateImage(model)
		scrollableImage = QtGui.QScrollArea()
		scrollableImage.setWidget(imagewidget)
		scrollableImage.setFixedHeight(self._restrictWidthToFit(scrollableImage))
		# self.filenames.append(filename)
		# function = QtGui.QCheckBox(latexString)
		function = QtGui.QCheckBox('')#str(model.expression))
		# function.setFixedSize(QSize(30,30))
		# function.setStyleSheet("background-image: url(:/"+fileName+";")
		#function.setStyleSheet("color: black; background-color: red; font: bold")
		#function.setChecked(True)
		#olor: black; background-color: red; font: bold")
		function.setChecked(True)
		self.functions.append(function)
		btn = QtGui.QPushButton()
		btn.setMaximumWidth(30)
		btn.setIcon(QIcon('src/ui/aggregator/settings-icon.png'))
		btn.setEnabled(True)
		self.settings_btn.append(btn)
		hbox.addWidget(function)
		# imagelabel = self.generateImage()
		self.imagelabels.append(scrollableImage)
		hbox.addWidget(scrollableImage)
		hbox.addWidget(btn)
		hbox.addStretch(1)
		_widget = QtGui.QWidget(self)
		_widget.setLayout(hbox)
		self.mainLayout.addWidget(_widget)
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


	def updateCurrentType(self):
		is2D = [ model.type == '2D' for model in self.models if model.visible ]
		if all(is2D):
			self.currenttype = '2D'
		else:
			self.currenttype = '3D'

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
				self.table = ModelSettingsTable(self.settings_btn[i],self.model_settings[i],self.models[i].type)
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

			self.updateCurrentType()
			self.controller.updateViewport()


	def updateGlobalSettings(self):
		self.domain["x"] = self.controller.global_settings["xrange"]
		self.domain["y"] = self.controller.global_settings["yrange"]
		if(self.controller.aggregator.getCurrentType()=="3D"):
			self.domain["z"] = self.controller.global_settings["zrange"]
		self.controller.updateViewport()
