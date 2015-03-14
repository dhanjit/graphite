from model import *
from ui.canvas import *

class Aggregator():
	"""
	Database of the mixture of 2d and 3d models with settings of each model.
	"""
	def __init__(self,parent):
		self.initAttr(parent)

	def initAttr(self,parent):
		self.models = [] #list of tuples, a model and boolean to know if it is selected for plotting
		self.settings = {}
		#initialise default settings
		self.settings['backcolor'] = 'gray'
		self.settings['dpi'] = 100
		self.settings['x_range'] = (-3.0,+3.0)
		self.settings['y_range'] = (-3.0,+3.0)

		self.canvas2D = Canvas2D(parent); 

	def insertModel(self,model):
		self.models.append((model,True));

	def merger(self, model, model):
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
