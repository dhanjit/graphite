from PyQt4 import QtGui, QtCore
from numpy import arange
from src.ui import Calculator
from src.ui import Canvas2D, Canvas3D
from src import Parser

class Display(QtGui.QWidget):
	
	parser = Parser()

	def __init__(self):
		super(Display,self).__init__()
		# self.type = '2d'
		# self.table = None
		
		self.models = []						# list of model tuples
		self.domain = {}

		self.canvas2D = Canvas2D()
		self.canvas3D = Canvas3D()
		
		self.domain['x'] = arange(-5, 5, 0.25)
		self.domain['y'] = arange(-5, 5, 0.25)
		self.domain['z'] = arange(0.0, 3.0, 0.1)

		self.calculator = Calculator(self)
<<<<<<< HEAD
		self.canvas = Canvas2D()
		#self.canvas = Canvas3D()
=======
		# self.canvas = self.canvas2D
		self.canvas = self.canvas3D

>>>>>>> 2137ddd548201df3eb62c1d326f4047ea2039a30
		self.defaultSettings()
		self.initUI()

	# initialise default settings
	def defaultSettings(self):
		self.settings = {}
		self.settings['backcolor'] = 'gray'
		self.settings['dpi'] = 100
		self.settings['x_range'] = (-3.0,+3.0)
		self.settings['y_range'] = (-3.0,+3.0)

	def initUI(self):
<<<<<<< HEAD
		# hbox_layout = QtGui.QHBoxLayout()
		# hbox_layout.addWidget(self.calculator)
		# hbox_layout.addWidget(self.canvas)
		#hbox_layout.addStretch()
		grid_layout = QtGui.QGridLayout()
		grid_layout.addWidget(self.calculator,0,0,2,2)
		grid_layout.addWidget(self.canvas,0,2,3,7)
		self.setLayout(grid_layout)
=======
		hbox_layout = QtGui.QHBoxLayout()
		hbox_layout.addWidget(self.calculator)
		hbox_layout.addWidget(self.canvas)
		self.setLayout(hbox_layout)
>>>>>>> 2137ddd548201df3eb62c1d326f4047ea2039a30

	def insert_function_model(self, function):
		model = Display.parser.parse_expression(function)
		self.models.append(model)
		self.draw_canvas()

	def insert_data_model(self, filename):
		model = Display.parser.parse_file(filename)
		self.models.append(model)
		self.draw_canvas()

	def draw_canvas(self):
		self.canvas.axes.clear()
		#if self.type == '2d':
		#	self.canvas = self.canvas2D
		#else:
		#	self.canvas = self.canvas3D

		for model in self.models:
			if model.visible:
<<<<<<< HEAD
				temp = True
				#data = model.eval(self.domain)				
				#self.canvas.axes.plot(self.domain, data)
				#self.canvas.axes.plot(self.domain, data,color=model.settings['LineColor'], label=str(model.expression),linewidth=model.settings['LineWidth']);
				#self.canvas.draw()

				#if model.type == 'data':
					#data = model.data
					#x = [d[0] for d in data]
					#y = [d[1] for d in data]
					#self.canvas.axes.plot(x, y)
				#else:
					#data = model.eval(self.domain)
					#self.canvas.axes.plot(self.domain, data)
					#data = np.arange(20).reshape([4, 5]).copy()
					#self.canvas.axes.imshow(data, interpolation='nearest')
					#self.canvas.axes.plot(self.domain, data)
					#self.scatter_plot()
		self.surface_plot()
		#self.scatter_plot()
=======
				model.draw(self.canvas, self.domain)

>>>>>>> 2137ddd548201df3eb62c1d326f4047ea2039a30
		self.canvas.draw()

	def surface_plot(self):
		print("plot")
		self.canvas.axes.mouse_init()
		X = np.arange(-5, 5, 0.25)
		Y = np.arange(-5, 5, 0.25)
		X, Y = np.meshgrid(X, Y)
		R = np.sqrt(X**2 + Y**2)
		Z = np.sin(R)
		surf = self.canvas.axes.plot_surface(X, Y, Z, rstride=1, cstride=1, cmap=cm.coolwarm, linewidth=0, antialiased=False)
		self.canvas.axes.set_zlim(-1.01, 1.01)

	def scatter_plot(self):
		xs = np.random.random_sample(100)
		ys = np.random.random_sample(100)
		zs = np.random.random_sample(100)
		self.canvas.axes.scatter(xs, ys, zs, c='r', marker='o')
