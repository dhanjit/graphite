from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure


class Canvas(FigureCanvas):
	def __init__(self, figure=Figure()):
		super(Canvas,self).__init__(figure)
		self.fig = figure

	def initUI(self):
		pass

	def saveFigure(self,filename):
		filename=str(filename)
		self.fig.savefig(filename)
		#self.fig.savefig(filename)

	def plot(self,aggregator):
		raise NotImplementedError("Subclass not implemented function")

	def updateSettings(self):
		raise NotImplementedError("Subclass not implemented function")
	