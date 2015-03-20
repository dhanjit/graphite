from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure


class Canvas3D(FigureCanvas):
	def __init__(self, parent=None, width=6.5, height=5.5, dpi=100, sharex=None, sharey=None, fig=None):
		self.fig = Figure(figsize=(width, height), dpi=dpi, facecolor='#FFFFFF')
		FigureCanvas.__init__(self, self.fig)
		#super(Canvas3D, self).__init__(self.fig)

		self.axes = self.fig.add_subplot(111, projection='3d')
		self.fig.subplots_adjust(left=0.1, bottom=0.1, right=0.9, top=0.9)
		self.axes.hold(True)

		self.setParent(parent)
		#FigureCanvas.setSizePolicy(self,
		#	QtGui.QSizePolicy.Expanding,
		#	QtGui.QSizePolicy.Expanding)
		FigureCanvas.updateGeometry(self)