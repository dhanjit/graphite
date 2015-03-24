from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure,SubplotParams
from PyQt4 import QtGui
class LatexCanvas(FigureCanvas):

	def __init__(self,parent=None):
		cl = QtGui.QColor(255, 255, 255).name()
		spp = SubplotParams(left=0.05,right=0.9,bottom=0.1,top=0.9,wspace=.2,hspace=.2)
		self.fig = Figure(figsize=(5,1),edgecolor=str(cl), facecolor=str(cl),subplotpars= spp,tight_layout=False)
		super(LatexCanvas, self).__init__(figure=self.fig)

		self.axes = self.fig.add_subplot(111)
		self.setParent(parent)
		# self.axes.set_axes_off()
		#FigureCanvas.setSizePolicy(self,
			#QtGui.QSizePolicy.Expanding,
			#QtGui.QSizePolicy.Expanding)
		# FigureCanvas.updateGeometry(self)