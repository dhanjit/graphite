#import src.model.Model
from .Model import Model
class Model3D(Model):

	def __init__(self,plottable3d=None):
		super(Model3D, self).__init__()
		self.plottable3d = plottable3d
		self.type = '3D'

	def eval(self, domain):
		return self.plottable3d

	def getPlottable(self, type='3D', domain={}):
		print('here3d')
		return self.eval(domain)
