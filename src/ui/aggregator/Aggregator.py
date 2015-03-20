from PyQt4 import QtGui
from src.Settings import *

class Aggregator(QtGui.QWidget):
#	def __init__(self, controller):
	def __init__(self):
		super(Aggregator, self).__init__()
		self.models = []
		self.domain = []
#		self.controller = controller  # Check gargbage collection. Causes problems.
		self.settings = Settings()
		self.initUI()

	def initUI(self):
		pass

	def addModel(self, model):
		self.models.append(model)

	def genSelectedModelData(self):
		for model in self.models:
			if model.visible:
				data = model.eval(self.domain)
				yield data
