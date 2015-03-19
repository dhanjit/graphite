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
		pass

class Model2D(Model):
	
	def eval(self, domain):
		x = Symbol('x')		
		f = lambdify(x, self.expression, "numpy")
		self.data = f(domain)
		return self.data

class Model3D(Model):
	
	def eval(self, domain):
		x,y = Symbol('x y')
		f = lambdify((x,y), self.expression, "numpy")
		self.data = f(domain[0],domain[1])
		return self.data
