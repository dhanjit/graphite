from sympy import Symbol
from sympy import lambdify
from .Model3D import Model3D
class Expression3DModel(Model3D):

	def __init__(self,expression3D):
		super(Expression3DModel, self).__init__()
		self.expression = expression3D

	def eval(self, domain):
		x,y = Symbol('x y')
		f = lambdify((x,y), self.expression, "numpy")
		self.data = f(domain[0],domain[1])
		return self.data
