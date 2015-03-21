from PyQt4 import QtGui
from src.Settings import *
from numpy import arange

class Aggregator(QtGui.QWidget):
	models = []

	def __init__(self):
		super(Aggregator, self).__init__()
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