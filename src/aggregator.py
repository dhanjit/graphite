from model import *
from ui.canvas import *
from numpy import arange
from inputInterface import *

class Aggregator():
	"""
	Aggregate of the combinations of 2d and 3d models.
	"""
	def __init__(self,parent):
		self.models = [] 	# list of tuples, a model and boolean to know if it is selected for plotting
		self.settings = {}	# initialise default settings
		
		self.settings['backcolor'] = 'gray'
		self.settings['dpi'] = 100
		self.settings['x_range'] = (-3.0,+3.0)
		self.settings['y_range'] = (-3.0,+3.0)

		self.canvas2D = Canvas2D(parent);
		self.numpad = Ui_numPad()

	def insertModel(self,model):
		self.models.append((model,True));
		self.canvas2D.axes.clear()
		self.compute_graph()

	def compute_graph(self):
		self.xVal = arange(self.settings['x_range'][0],self.settings['x_range'][1],0.02) ##just for testing
		for model in self.models:
			if model[1] == True:
				model[0].eval(self.xVal)
				self.canvas2D.axes.plot(self.xVal, model[0].dataPoints);

		self.canvas2D.draw()

	def merger(self, model1, model2):
		pass

	def update():
		pass

	def save():
		pass

	def close():
		pass

	def open():
		pass

	class Feature():
		def area():
			pass
		def intersect():
			pass
