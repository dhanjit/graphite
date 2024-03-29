from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure

class Canvas(FigureCanvas):
	def __init__(self, figure=None):
		super(Canvas,self).__init__(figure)
		self.fig = figure

	def initUI(self):
		pass

	def saveFigure(self,filename):
		filename=str(filename)
		self.fig.savefig(filename)

	def plot(self,plottable, settings, isfile=False):
		raise NotImplementedError("Subclass not implemented function")

	def updateSettings(self,settings):
		raise NotImplementedError("Subclass not implemented function")
	