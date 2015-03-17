from sympy import *

class Model(object):
	"""
	Represents the model of the equation.
	@expression - parsed sympy expression
	@type - 2D or 3D
	"""
	def __init__(self):
		self.settings = {}
		self.expression = ""
		self.type = -1
		self.errors = []

	def eval(self,something):
		pass

class Model2D(Model):
	
	def __init__(self):
		super(Model2D, self).__init__()
		self.type = 2

	def eval(self,xVal):
		x = Symbol('x')
		f = lambdify(x,self.expression,"numpy")
		self.dataPoints = f(xVal)

class Model3D(Model):

	def __init__(self):
		super(Model3D, self).__init__()
		self.type = 3

	def eval(self,xyVal):
		pass
	

