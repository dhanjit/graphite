#from ui.canvas import Canvas2D, Canvas3D
from numpy import arange

class Aggregator:
	"""
	Aggregate of the combinations of 2d and 3d models.
	"""
	def __init__(self, window):
		self.models = []						# list of model tuples
#		self.calc = UI_numpad()
		#self.canvas = 
#		self.canvas = Canvas2D(window);
		self.domain = arange(-3.0, 3.0, 0.2);
		
		# initialise default settings
		self.settings = {}
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
				print(model.data)
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