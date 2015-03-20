# from .Expression3DModel import Expression3DModel
# from .Expression2DModel import Expression2DModel
# from .Expression2D import Expression2D
# from .Expression3D import Expression3D
# from .Plottable2D import Plottable2D
# from .Plottable3D import Plottable3D
# from .Model2D import Model2D
# from .Model3D import Model3D

from src.Settings import Settings

class Model(object):

	def __init__(self):
		self.settings = Settings()
		self.visible = True



	def eval(self, domain):
		raise NotImplementedError("Subclass must implement abstract method")


# class Model2D(Model):
#
# 	def __init__(self,plottable2d):
# 		super(Model2D, self).__init__()
# 		self.plottable2d = plottable2d
#
# 	def eval(self, domain):
# 		return self.plottable2d.points
#
# class Model3D(Model):
#
# 	def __init__(self,plottable3d):
# 		super(Model3D, self).__init__()
# 		self.plottable3d = plottable3d
#
# 	def eval(self, domain):
# 		return self.plottable3d.points