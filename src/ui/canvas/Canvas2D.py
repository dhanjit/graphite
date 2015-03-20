from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
from mpl_toolkits.mplot3d import Axes3D
from PyQt4 import QtGui, QtCore

class Canvas2D(FigureCanvas):
	""" this is a QWidget (as well as a FigureCanvasAgg, etc.)."""
	def __init__(self, parent=None):
		
		self.fig = Figure()
		FigureCanvas.__init__(self, self.fig)

		self.axes=self.fig.add_subplot(111)
		self.setParent(parent)
		#FigureCanvas.setSizePolicy(self,
			#QtGui.QSizePolicy.Expanding,
			#QtGui.QSizePolicy.Expanding)
		#FigureCanvas.updateGeometry(self)

	def save_figure(self,fileName):
		fileName=str(fileName)
		self.fig.savefig(fileName)
