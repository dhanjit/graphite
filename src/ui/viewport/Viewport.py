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
		hbox_layout.addStretch()
		self.setLayout(hbox_layout)

	def updateCanvas(self, aggregator):
		self.canvastype = aggregator.getCurrentType(default='3D')
		self.canvas[self.canvastype].axes.clear()

		print self.canvastype
		print 'yoyo'

		self.plot(plottables = aggregator.getPlottables())

		self.canvas[self.canvastype].draw()

	def plot(self, plottables):
		print plottables
		print len(plottables[0].x)
		print len(plottables[0].y)
		# print len(plottables[0].z)
		for plottable in plottables:
#			print plottable
			self.canvas[self.canvastype].plot(plottable)

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
		print("foo2")

	def updateSettings(self):
		self.canvas[self.canvastype].updateSettings()