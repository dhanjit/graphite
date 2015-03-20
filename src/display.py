from PyQt4 import QtGui, QtCore
from numpy import arange
from src.ui import Calculator
from src.ui import Canvas2D, Canvas3D
from src import Parser
from src.ui.aggregateSettings import Customize 

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

		#self.canvas = Canvas2D()
		#self.canvas = Canvas3D()

		self.canvas = self.canvas2D
		#self.canvas = self.canvas3D


		self.defaultSettings()
		self.global_settings = Customize(self)
		self.initUI()

	# initialise default settings
	def defaultSettings(self):
		self.settings = {}
		self.settings["axis"] = "x"
		self.settings["xrange"] = (-3.0,+3.0)
		self.settings["yrange"] = (-3.0,+3.0)
		self.settings["zrange"] = (-3.0,+3.0)
		self.settings["facecolour"] = QtGui.QColor("red")
		self.settings["grid"] = False
		self.settings["autolayout"] = False
		self.settings["xscale"] = "linear"
		self.settings["yscale"] = "linear"
		self.settings["zscale"] = "linear"
		self.settings['dpi'] = 100
		# self.settings = {}
		# self.settings['backcolor'] = 'gray'
		# self.settings['dpi'] = 100
		# self.settings['x_range'] = (-3.0,+3.0)
		# self.settings['y_range'] = (-3.0,+3.0)

	def initUI(self):

		# hbox_layout = QtGui.QHBoxLayout()
		# hbox_layout.addWidget(self.calculator)
		# hbox_layout.addWidget(self.canvas)
		#hbox_layout.addStretch()
		grid_layout = QtGui.QGridLayout()
		grid_layout.addWidget(self.calculator,0,0,2,2)
		grid_layout.addWidget(self.canvas,0,2,3,7)
		grid_layout.addWidget(self.global_settings,2,0,1,2)
		self.setLayout(grid_layout)

		# hbox_layout = QtGui.QHBoxLayout()
		# hbox_layout.addWidget(self.calculator)
		# hbox_layout.addWidget(self.canvas)
		# self.setLayout(hbox_layout)


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

		#model.draw(self.canvas, self.domain)


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
