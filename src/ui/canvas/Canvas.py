from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure


class Canvas(FigureCanvas):
	def __init__(self):
		super(Canvas,self).__init__(self.fig)

	def initUI(self):
		pass