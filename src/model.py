from sympy import *

class Model():
	"""
	Represents the model of the equation.
	@sympyexpression - parse expression
	@integer - number of variables
	"""
	def __init__(self):
		self.initAttr()

	def initAttr(self):
		self.settings = {}
		self.expression = ""
		self.numVar = -1
		self.errors = []

class Model2D(Model):
	
	def __init__(self):
		super(Model2D, self).__init__()
		self.numVar = 2

	def eval(self,xVal):
		x = Symbol('x')
		f = lambdify(x,self.expression,"numpy")
		self.dataPoints = f(x)
		pass

class Model3D(Model):

	def __init__(self):
		super(Model2D, self).__init__()
		self.numVar = 3

	def eval(self):
		pass
	

