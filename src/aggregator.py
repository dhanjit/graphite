from ui.canvas import *
from numpy import arange

class Aggregator:
	"""
	Aggregate of the combinations of 2d and 3d models.
	"""
	def __init__(self, parent):
		self.models = [] 	# list of tuples, a model and boolean to know if it is selected for plotting
		self.canvas = Canvas2D(parent);
		self.domain = numpy.arange(-3.0, 3.0, 0.2);
		
		self.settings = {}	# initialise default settings
		self.settings['backcolor'] = 'gray'
		self.settings['dpi'] = 100
		self.settings['x_range'] = (-3.0,+3.0)
		self.settings['y_range'] = (-3.0,+3.0)

	def insert_model(self, model):
		self.models.append((model, True));
		self.canvas.axes.clear()
		self.draw()

	def draw(self):
		for model in self.models:
			if(model.visible):
				model.eval(self.domain)
				self.canvas.axes.plot(self.domain, model.data);

		self.canvas.draw()

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