from Model import Model
class Model2D(Model):

	def __init__(self,plottable2d=None):
		print('inModel2D__init__')
		super(Model2D, self).__init__()
		self.plottable2d = plottable2d
		self.type = '2D'
		print('outModel2D__out__')

	def eval(self, domain):
		return self.plottable2d

	def getPlottable(self, type, domain):
		return self.eval(domain)