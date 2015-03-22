from src.model.Expression2D import Expression2D
from src.model.Expression3D import Expression3D
from src.model.Expression2DModel import Expression2DModel
from src.model.Expression3DModel import Expression3DModel
from src.model.Model2D import Model2D
from src.model.Model3D import Model3D
from src.model.Plottable2D import Plottable2D
from src.model.Plottable3D import Plottable3D

class ModelCreator():
	@staticmethod
	def createModelFromExpression(parser,string):
		expr = parser.parse(string)
		print('parsed')
		if isinstance(expr,Expression2D):
			print('isExpression2D')
			return Expression2DModel(expr)
		elif isinstance(expr,Expression3D) :
			return Expression3DModel(expr)
		else:
			raise Exception(expr)

	@staticmethod
	def createModelFromFile(formatHandler,filename):
		plottable = formatHandler.handle(filename)
		if isinstance(plottable, Plottable2D):
			return Model2D(plottable, filename)
		elif isinstance(plottable, Plottable3D) :
			return Model3D(plottable)
		else:
			raise Exception(plottable)