from PyQt4 import QtGui, QtCore
from src.ui import Calculator
from src.ui import Canvas2D, Canvas3D
from src import Model
from src import Aggregator
from src import Parser

class Display(QtGui.QWidget):
	
	parser = Parser()

	def __init__(self):
		super(Display,self).__init__()
		self.calculator = Calculator(self)
		#if self.aggregator.type == '2d':
		self.canvas = Canvas2D(self)
		#else
		# self.canvas = Canvas3D(self)
		self.aggregator = Aggregator(self.canvas)

		self.initUI()

	def initUI(self):
		hbox_layout = QtGui.QHBoxLayout()
		hbox_layout.addWidget(self.calculator)
		hbox_layout.addWidget(self.canvas)
		hbox_layout.addStretch()
		self.setLayout(hbox_layout)

	def insert_model(self, function):
		model = Display.parser.parse(function)
		self.aggregator.insert_model(model)