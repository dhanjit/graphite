from sympy import Symbol
from sympy import lambdify
from src.model.Model2D import Model2D
from src.model.Plottable2D import Plottable2D

class Expression2DModel(Model2D):

	def __init__(self, expression2D):
		print('inExpression2DModel__init__')
		super(Expression2DModel, self).__init__()
		self.expression = expression2D.expr
		self.type = '2D'
		print('outExpression2DModel__init__')

	def eval(self, domain):
		x = Symbol('x')
		f = lambdify(x, self.expression, "numpy")
		plottable = Plottable2D(x=domain['x'], y=f(domain['x']))

		return plottable

	def getRenderedView(self):
		return str(self.expression)

	#def getPlottable(self, type, domain):

