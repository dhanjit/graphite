from PyQt4.QtGui import QWidget, QHBoxLayout, QStackedWidget
from src.ui.canvas.Canvas3D import Canvas3D
from src.ui.canvas.Canvas2D import Canvas2D

class Viewport(QWidget):
	def __init__(self):
		super(Viewport, self).__init__()
		# self.controller = controller
		self.canvas2d = Canvas2D()
		self.canvas3d = Canvas3D()
		self.canvas = { '2D': self.canvas2d, '3D': self.canvas3d }
		self.canvascontainer = None
		self.canvastype = '2D'

		#	    self.settingsWidget
		self.initUI()

	def initUI(self):
		self.initCanvasContainer()
		hbox_layout = QHBoxLayout()
		hbox_layout.addWidget(self.canvascontainer)
		# hbox_layout.addStretch()
		self.setLayout(hbox_layout)

	def updateCanvas(self, aggregator):
		self.canvastype = aggregator.getCurrentType(default='3D')
		self.canvas[self.canvastype].axes.clear()
		self.plot(plottables = aggregator.getPlottablesSettings())

		self.canvas[self.canvastype].draw()

	def plot(self, plottables):
		for plottable in plottables:
			data = plottable[0]
			settings = plottable[1]
			print(data, settings)
			self.canvas[self.canvastype].plot(data, settings)

	def setCanvasType(self,type='2D'):
		self.canvastype = type

	def initCanvasContainer(self):
		container = QStackedWidget()
		container.insertWidget(0, self.canvas2d)
		container.insertWidget(1, self.canvas3d)
		self.canvascontainer = container

	def showCanvas(self):
		if self.canvastype == '2D':
			self.canvascontainer.setCurrentIndex(0)
		elif self.canvastype == '3D':
			self.canvascontainer.setCurrentIndex(1)
		else:
			self.canvascontainer.setCurrentIndex(1)
		self.canvascontainer.update()

	def updateSettings(self):
		self.canvas[self.canvastype].updateSettings()
