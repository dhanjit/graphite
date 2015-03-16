from PyQt4 import QtGui, Qt

class ModelList(QtGui.QWidget):

	def __init__(self):
		super(ModelList, self).__init__()
		self.initUI()


	def initUI(self):
		pass


	def insert(self, model):
		pass




class SingleModel(QtGui.QWidget):

	def __init__(self, model):
		super(SingleModel, self).__init__()
		
		#add button and a png rendered by latex for model
