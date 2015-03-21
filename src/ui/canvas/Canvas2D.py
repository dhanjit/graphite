# from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
# from mpl_toolkits.mplot3d import Axes3D
# from PyQt4 import QtGui, QtCore
from Canvas import Canvas

class Canvas2D(Canvas):
	""" this is a QWidget (as well as a FigureCanvasAgg, etc.)."""
	def __init__(self, parent=None):
		
		self.fig = Figure()
		super(Canvas2D,self).__init__(figure=self.fig)
		#FigureCanvas.__init__(self, self.fig)

		self.axes=self.fig.add_subplot(111)
		self.setParent(parent)
		#FigureCanvas.setSizePolicy(self,
			#QtGui.QSizePolicy.Expanding,
			#QtGui.QSizePolicy.Expanding)
		#FigureCanvas.updateGeometry(self)

	def plot(self, plottable2D):
		for data in plottable2D:
			self.axes.plot(data['x'], data['y'])
		self.draw()


