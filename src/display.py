from PyQt4 import QtGui, QtCore
import numpy as np
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
		self.domain = arange(0, 3.0, 0.1),  arange(0, 3.0, 0.1)
		self.type = '3d'

		self.table = None
		self.calculator = Calculator(self)
		#self.canvas = Canvas2D()
		self.canvas = Canvas3D()

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

	def insert_function_model(self, function):
		model = Display.parser.parse(function)
		self.models.append(model)
		self.canvas.axes.clear()
		self.draw_canvas()

	def insert_data_model(self, filename):
		with open(filename, 'rb') as input:			
			lines = input.read().decode(encoding='UTF-8').split('\n')[:-1]
		data = []
		for line in lines:
			tokens = line.split(' ')
			d = [float(token) for token in tokens]
			data.append(d)
		model = Model()
		model.data = data
		self.models.append(model)
		self.canvas.axes.clear()
		self.draw_canvas()

	def draw_canvas(self):
		for model in self.models:
			if model.visible:
				if model.type == 'data':
					data = model.data
					x = [d[0] for d in data]
					y = [d[1] for d in data]
					print(x, y)
					self.canvas.axes.plot(x, y)
				else:
					#data = model.eval(self.domain)
					#self.canvas.axes.plot(self.domain, data)
					#data = np.arange(20).reshape([4, 5]).copy()
					#self.canvas.axes.imshow(data, interpolation='nearest')
					#self.canvas.axes.plot(self.domain, data)
					self.scatter_plot()

		self.canvas.draw()

	def scatter_plot(self):
		xs = np.random.random_sample(100)
		ys = np.random.random_sample(100)
		zs = np.random.random_sample(100)
		self.canvas.axes.scatter(xs, ys, zs, c='r', marker='o')
