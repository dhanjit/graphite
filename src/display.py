from PyQt4 import QtGui, QtCore
from numpy import arange
from src.ui import Calculator
from src.ui import Canvas2D, Canvas3D
from src import Model
from src import Aggregator
from src import Parser

class Display(QtGui.QWidget):
	
	parser = Parser()

	def __init__(self):
		super(Display,self).__init__()
		self.models = []						# list of model tuples
		self.domain = arange(-3.0, 3.0, 0.1);
		self.type = '2d'

		self.calculator = Calculator(self)
		self.canvas = Canvas2D()

		self.initUI()

		# initialise default settings
		self.settings = {}
		self.settings['backcolor'] = 'gray'
		self.settings['dpi'] = 100
		self.settings['x_range'] = (-3.0,+3.0)
		self.settings['y_range'] = (-3.0,+3.0)

	def initUI(self):
		hbox_layout = QtGui.QHBoxLayout()
		hbox_layout.addWidget(self.calculator)
		hbox_layout.addWidget(self.canvas)
		hbox_layout.addStretch()
		self.setLayout(hbox_layout)

	def insert_model(self, function):
		model = Display.parser.parse(function)
		self.models.append(model)
		self.canvas.axes.clear()
		self.draw_canvas()

	def draw_canvas(self):
		for model in self.models:
			if model.visible:
				data = model.eval(self.domain)
				self.canvas.axes.plot(self.domain, data,color=model.settings['LineColor'], label=str(model.expression),linewidth=model.settings['LineWidth']);
		self.canvas.draw()