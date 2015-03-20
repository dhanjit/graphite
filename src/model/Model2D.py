from Model import Model
class Model2D(Model):

	def __init__(self,plottable2d):
		super(Model2D, self).__init__()
		self.plottable2d = plottable2d

	def eval(self, domain):
		return self.plottable2d.points