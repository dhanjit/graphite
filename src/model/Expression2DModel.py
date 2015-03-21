from Model2D import Model2D
from sympy import Symbol
from sympy import lambdify

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
		print domain
		domain['y'] = f(domain['x'])
		return domain
		#return self.data