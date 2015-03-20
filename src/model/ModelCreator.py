from Expression2D import Expression2D
from Expression3D import Expression3D
from Expression2DModel import Expression2DModel
from Expression3DModel import Expression3DModel
from Model2D import Model2D
from Model3D import Model3D
from Plottable2D import Plottable2D
from Plottable3D import Plottable3D

class ModelCreator():
	@staticmethod
	def createModelFromExpression(parser,string):
		expr = parser.parse(string)
		if isinstance(expr,Expression2D):
			return Expression2DModel(expr)
		elif isinstance(expr,Expression3D) :
			return Expression3DModel(expr)
		else:
			raise Exception(expr)

	@staticmethod
	def createModelFromFile(formatHandler,file):
		plottable = formatHandler.handle(file)
		if isinstance(plottable, Plottable2D):
			return Model2D(plottable)
		elif isinstance(plottable, Plottable3D) :
			return Model3D(plottable)
		else:
			raise Exception(plottable)