from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
# from PyQt4 import QtGui, QtCore
from graphite.ui.canvas.Canvas import Canvas

class Canvas2D(Canvas):
	""" this is a QWidget (as well as a FigureCanvasAgg, etc.)."""
	def __init__(self, parent=None):
		self.fig = Figure()
		super(Canvas2D, self).__init__(figure=self.fig)

		# self.fig, self.axes = self.fig.subplots()
		self.axes = self.fig.add_subplot(111)
		self.setParent(parent)

		# self.axes.xaxis.set_ticks_position('bottom')
		# self.axes.spines['bottom'].set_position(('data',0))
		# self.axes.yaxis.set_ticks_position('left')
		# self.axes.spines['left'].set_position(('data',0))
		
		#FigureCanvas.setSizePolicy(self,
			#QtGui.QSizePolicy.Expanding,
			#QtGui.QSizePolicy.Expanding)
		# FigureCanvas.updateGeometry(self)

	def plot(self, plottable2D,settings,isfile=False):
		self.axes.plot(plottable2D.x, plottable2D.y,color = str(settings["Color"]),linestyle = str(settings["Line Fill"]),linewidth=int(settings["Width"]),marker = str(settings["Line Style"]))
		self.axes.set_xlabel('x',fontsize = 15)
		self.axes.set_ylabel('y',fontsize = 15)

	def updateSettings(self,settings):
		# print settings
		# self.fig.set(facecolor = str(settings["facecolour"]),linewidth = float(str(settings["linewidth"])),dpi = float(str(settings["dpi"])))
		#
		if settings:
			self.fig.set(facecolor = str(settings["facecolour"]))
			# self.fig.set_animated(settings["animate"])
		# self.fig.set_animated(settings["animated"])
			self.draw()

