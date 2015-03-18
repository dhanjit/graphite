from PyQt4 import QtGui, QtCore
from src.ui import Calculator
from src.ui import Canvas

class Display(QtGui.QWidget):
	def __init__(self):
		super(Display,self).__init__()
		self.calculator = Calculator(self)
		self.canvas = Canvas(self);

		initUI()

	def initUI(self):
		pass

