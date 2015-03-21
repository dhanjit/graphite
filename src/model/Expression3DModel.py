from sympy import Symbol
from sympy import lambdify
from Model3D import Model3D
from Plottable3D import Plottable3D
import numpy as np

class Expression3DModel(Model3D):

	def __init__(self,expression3D):
		super(Expression3DModel, self).__init__()
		self.expression = expression3D.expr
		self.type = '3D'

	def eval(self, domain):
		domain['x'], domain['y'] = np.meshgrid(domain['x'], domain['y'])
		x = Symbol('x')
		y = Symbol('y')
		f = lambdify((x, y), self.expression, "numpy")
		plottable = Plottable3D( x=domain['x'], y=domain['y'], z=f(domain['x'], domain['y']))
		print len(plottable.x)
		print len(plottable.y)
		print len(plottable.z)
		return plottable


