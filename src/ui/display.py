from PyQt4 import QtGui, QtCore
from src.ui import Calculator
from src.ui import Canvas

class Display(QtGui.QWidget):
	def __init__(self):
		super(Display,self).__init__()
		self.calculator = Calculator(self)
		self.canvas = Canvas(self);


		self.initUI()

	def initUI(self):
		
		self.hbox_layout = QtGui.QHBoxLayout()
		self.hbox_layout.addWidget(self.calculator)
		self.hbox_layout.addWidget(self.canvas)
		self.setLayout(self.hbox_layout)

