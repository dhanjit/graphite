from sympy import *

class Model:
	"""
	Represents the model of the equation.
	@expression - parsed sympy expression
	@type 		- 2D or 3D
	@data 		- the evaluated data of the model
	"""
	def __init__(self, expression):
		self.settings = {}
		self.expression = expression
		self.type = -1
		self.errors = []
		self.visible = True

	def eval(self, domain):
		self.eval2d(domain)
		return self.data

	def eval2d(self, domain):
		x = Symbol('x')
		f = lambdify(x, self.expression, "numpy")
		self.data = f(domain)
		return self.data

	def eval3d(self, domain):
		x = Symbol('x')
		f = lambdify(x, self.expression, "numpy")
		self.data = f(domain)
		return self.data
