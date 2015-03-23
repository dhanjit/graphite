from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
# from PyQt4 import QtGui, QtCore
from src.ui.canvas.Canvas import Canvas

class Canvas2D(Canvas):
	""" this is a QWidget (as well as a FigureCanvasAgg, etc.)."""
	def __init__(self, parent=None):
		self.fig = Figure()
		super(Canvas2D, self).__init__(figure=self.fig)

		# self.fig, self.axes = self.fig.subplots()
		self.axes = self.fig.add_subplot(111)
		self.setParent(parent)

		# self.axes.xlabel('xlabel')
		# self.axes.ylabel('ylabel')
		
		#FigureCanvas.setSizePolicy(self,
			#QtGui.QSizePolicy.Expanding,
			#QtGui.QSizePolicy.Expanding)
		# FigureCanvas.updateGeometry(self)

	def plot(self, plottable2D,settings):
		self.axes.plot(plottable2D.x, plottable2D.y,color = str(settings["Color"]),linestyle = str(settings["Line Fill"]),linewidth=int(settings["Width"]),marker = str(settings["Line Style"]))

	def updateSettings(self):
		pass
#		self.draw()

