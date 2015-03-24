from sympy import latex
from sympy import Symbol
from sympy import lambdify
import numpy as np

from graphite.model.Model3D import Model3D
from graphite.model.Plottable3D import Plottable3D


class Expression3DModel(Model3D):

	def __init__(self,expression3D):
		super(Expression3DModel, self).__init__()
		self.expression = expression3D.expr
		self.type = '3D'

	def eval(self, domain):
		#X, Y = domain['x'], domain['y']
		X, Y = np.meshgrid(domain['x'], domain['y'])
		x = Symbol('x')
		y = Symbol('y')
		f = lambdify((x, y), self.expression, "numpy")
		plottable = Plottable3D( x=domain['x'], y=domain['y'], z=f(X, Y))
		return plottable

	def getRenderedView(self):
		return latex(self.expression)