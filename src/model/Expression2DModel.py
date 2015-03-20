from Model2D import Model2D
from sympy import Symbol
from sympy import lambdify

class Expression2DModel(Model2D):

	def __init__(self, expression2D):
		super(Expression2DModel, self).__init__()
		self.expression = expression2D

	def eval(self, domain):
		x = Symbol('x')
		f = lambdify(x, self.expression, "numpy")
		self.data = f(domain)
		return self.data