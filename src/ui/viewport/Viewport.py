from PyQt4.QtGui import QWidget, QHBoxLayout
from src.ui.canvas.Canvas3D import Canvas3D
from src.ui.canvas.Canvas2D import Canvas2D
# from aggregateSettings import *


class Viewport(QWidget):
	def __init__(self):
		super(Viewport, self).__init__()
		# self.controller = controller
		self.canvas2d = Canvas2D()
		self.canvas3d = Canvas3D()

		self.canvas = self.canvas2d #default show 2d
		# self.settingsWidget = Customize()
		self.initUI()

	def initUI(self):
		hbox_layout = QHBoxLayout()
		hbox_layout.addWidget(self.canvas)
		# hbox_layout.addWidget(self.settingsWidget)
		#hbox_layout.addStretch()
		self.setLayout(hbox_layout)

	def updateView(self, aggregator):
		self.canvas.axes.clear()
		self.plot(aggregator)

	def plot(self, aggregator):
		for data in aggregator.genSelectedModelData():
			print('plotting')
			self.canvas.axes.plot(data['x'], data['y'])
		self.canvas.draw()
		print('plotted')