from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
from src.ui.canvas.Canvas import Canvas
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
from matplotlib import cm
from mpl_toolkits.mplot3d import Axes3D

class Canvas3D(Canvas):
	def __init__(self, parent=None, width=6.5, height=5.5, dpi=100, sharex=None, sharey=None, fig=None):
		self.fig = Figure(figsize=(width, height), dpi=dpi, facecolor='#FFFFFF')
		super(Canvas3D, self).__init__(figure=self.fig)

		self.axes = self.fig.add_subplot(1, 1, 1, projection='3d')
		# self.fig.subplots_adjust(left=0.1, bottom=0.1, right=0.9, top=0.9)
		# self.axes.hold(True)
		self.setParent(parent)

		#FigureCanvas.setSizePolicy(self,
		#	QtGui.QSizePolicy.Expanding,
		#	QtGui.QSizePolicy.Expanding)
		# FigureCanvas.updateGeometry(self)

	def plot(self, plottable3D, settings):
		if plottable3D.getDimension() == 2 :
			print "Plottable3d Canvas ",plottable3D.x
			self.axes.plot(plottable3D.x, plottable3D.y, zs=0, zdir='z', label='zs=0, zdir=z')
		else:
			self.axes.plot_surface(plottable3D.x, plottable3D.y, plottable3D.z, rstride=1, cstride=1, cmap=cm.coolwarm, linewidth=0, antialiased=False)
			# self.axes.scatter(plottable3D.x, plottable3D.y, plottable3D.z, c='r', marker='o')
		# self.axes.plot_surface(plottable3D.x, plottable3D.y, plottable3D.z, rstride=settings["rstride"], cstride=settings["cstride"], cmap=cm.coolwarm, linewidth=settings["Width"], antialiased=False)

		# x = np.random.random_sample(100)
		# y = np.random.random_sample(100)
		# z = np.random.random_sample(100)
		# self.axes = self.fig.add_subplot(1, 1, 1, projection='3d')
		# self.axes.scatter(x, y, z, c='r', marker='o')

	def updateSettings(self,settings):
		self.axes.mouse_init()
