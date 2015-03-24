from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
from graphite.ui.canvas.Canvas import Canvas
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
from matplotlib import cm
from mpl_toolkits.mplot3d import Axes3D
from graphite.model.Plottable3D import Plottable3D
class Canvas3D(Canvas):
	# def __init__(self, parent=None, width=6.5, height=5.5, dpi=100, sharex=None, sharey=None, fig=None):
	# 	self.fig = Figure(figsize=(width, height), dpi=dpi, facecolor='#FFFFFF')
	def __init__(self, parent=None):
		self.fig = Figure()
		super(Canvas3D, self).__init__(figure=self.fig)

		self.axes = self.fig.add_subplot(1, 1, 1, projection='3d')
		# self.fig.subplots_adjust(left=0.1, bottom=0.1, right=0.9, top=0.9)
		# self.axes.hold(True)
		self.setParent(parent)

		#FigureCanvas.setSizePolicy(self,
		#	QtGui.QSizePolicy.Expanding,
		#	QtGui.QSizePolicy.Expanding)
		# FigureCanvas.updateGeometry(self)

	def plot(self, plottable3D, settings, isfile=False):
		#print plottable3D.x, plottable3D.y, plottable3D.z, 'kk'
		if plottable3D.getType() == '2D' :
			self.axes.plot(plottable3D.x, plottable3D.y, zs=0, zdir='z', label='zs=0, zdir=z')
		else:
			if isfile:
				self.axes.scatter(plottable3D.x, plottable3D.y, plottable3D.z, c='r', marker='o')
			else:
				self.axes.plot_surface(plottable3D.x, plottable3D.y, plottable3D.z, color = str(settings["Color"]),rstride=int(str(settings["rstride"])), cstride=int(str(settings["cstride"])), cmap=cm.coolwarm, linewidth=settings["Width"], antialiased=False)

		# self.axes.plot_surface(plottable3D.x, plottable3D.y, plottable3D.z, rstride=settings["rstride"], cstride=settings["cstride"], cmap=cm.coolwarm, linewidth=settings["Width"], antialiased=False)

		# x = np.random.random_sample(100)
		# y = np.random.random_sample(100)
		# z = np.random.random_sample(100)
		# self.axes = self.fig.add_subplot(1, 1, 1, projection='3d')
		# self.axes.scatter(x, y, z, c='r', marker='o')

	def updateSettings(self,settings):
		if settings:
			self.fig.set(facecolor = str(settings["facecolour"]))
			self.draw()
		self.axes.mouse_init()
