from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
from PyQt4 import QtGui, QtCore 

class Canvas2D(FigureCanvas):
	""" this is a QWidget (as well as a FigureCanvasAgg, etc.)."""
	def __init__(self, parent=None):
		self.fig = Figure()
		self.axes=self.fig.add_subplot(111)
		FigureCanvas.__init__(self, self.fig)
		self.setParent(parent)
		#FigureCanvas.setSizePolicy(self,
			#QtGui.QSizePolicy.Expanding,
			#QtGui.QSizePolicy.Expanding)
		#FigureCanvas.updateGeometry(self)

	def save_figure(self,fileName):
		fileName=str(fileName)
		self.fig.savefig(fileName)

class Canvas3D(FigureCanvas):
	def __init__(self, parent=None, width = 6.5, height = 5.5, dpi = 100, sharex = None, sharey = None, fig = None):
		fig = Figure(figsize = (width, height), dpi = dpi, facecolor = '#FFFFFF')
		self.ax = fig.add_subplot(111, projection='3d')
		fig.subplots_adjust(left=0.1, bottom=0.1, right=0.9, top=0.9)
		self.ax.hold(True)
		
		FigureCanvas.__init__(self, fig)
		self.setParent(parent)
		#FigureCanvas.setSizePolicy(self,
		#	QtGui.QSizePolicy.Expanding,
		#	QtGui.QSizePolicy.Expanding)
		FigureCanvas.updateGeometry(self)