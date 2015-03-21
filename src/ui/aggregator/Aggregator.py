from PyQt4 import QtGui
from src.Settings import *
from numpy import arange

class Aggregator(QtGui.QWidget):
	models = []

	def __init__(self):
		super(Aggregator, self).__init__()
		self.currenttype = None
#		self.controller = controller  # Check gargbage collection. Causes problems.
		self.settings = Settings()
		self.initDomain()
		self.initUI()

	def initUI(self):
		pass

	def addModel(self, model):
		self.models.append(model)

	def initDomain(self, init={}):
		self.domain = init
		self.domain['x'] = arange(-5, 5, 0.25)
		self.domain['y'] = arange(-5, 5, 0.25)
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


	def getPlottables(self):
		return (model.getPlottable(type=self.currenttype, domain=self.domain) for model in self.models if model.visible)


