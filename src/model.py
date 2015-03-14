from sympy import *

class Model():
	"""
	Represents the model of the equation.
	@sympyexpression - parse exp
	ression
	@integer - number of variables
	"""
	def __init__(self):
		self.initAttr()

	def initAttr(self):
		self.settings = {}
		self.expression = ""
		self.numVar = -1
		self.errors = []

	def eval(self,something):
		pass

class Model2D(Model):
	
	def __init__(self):
		super(Model2D, self).__init__()
		self.numVar = 2

	def eval(self,xVal):
		x = Symbol('x')
		f = lambdify(x,self.expression,"numpy")
		self.dataPoints = f(xVal)
		pass

class Model3D(Model):

	def __init__(self):
		super(Model3D, self).__init__()
		self.numVar = 3

	def eval(self,xyVal):
		pass
	

