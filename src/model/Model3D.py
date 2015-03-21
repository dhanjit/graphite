#import src.model.Model
from .Model import Model
class Model3D(Model):

	def __init__(self,plottable3d=None):
		super(Model3D, self).__init__()
		self.plottable3d = plottable3d

	def eval(self, domain):
		return self.plottable3d.points