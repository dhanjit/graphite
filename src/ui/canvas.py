from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
from matplotlib import pyplot as plot
from mpl_toolkits.mplot3d import Axes3D
from PyQt4 import QtGui, QtCore

class Canvas2D(FigureCanvas):
	""" this is a QWidget (as well as a FigureCanvasAgg, etc.)."""
	def __init__(self, parent=None):
		fig = Figure()
		self.axes = fig.add_subplot(111)
		
		FigureCanvas.__init__(self, fig)
		self.setParent(parent)
		#FigureCanvas.setSizePolicy(self,
			#QtGui.QSizePolicy.Expanding,
			#QtGui.QSizePolicy.Expanding)
		#FigureCanvas.updateGeometry(self)

class Canvas3D(FigureCanvas):
	def __init__(self, parent=None, width = 6.5, height = 5.5, dpi = 100, sharex = None, sharey = None, fig = None):
		fig = Figure(figsize = (width, height), dpi = dpi, facecolor = '#FFFFFF')
		self.axes = fig.add_subplot(111, projection='3d')
		fig.subplots_adjust(left=0.1, bottom=0.1, right=0.9, top=0.9)
		self.axes.hold(True)
		
		FigureCanvas.__init__(self, fig)
		self.setParent(parent)
		#FigureCanvas.setSizePolicy(self,
		#	QtGui.QSizePolicy.Expanding,
		#	QtGui.QSizePolicy.Expanding)
		FigureCanvas.updateGeometry(self)