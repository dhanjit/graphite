from sympy import *
import numpy as np
from matplotlib import cm

class Model:
	"""
	Represents the model of the equation.
	@expression - parsed sympy expression
	@type 		- 2D or 3D
	@data 		- the evaluated data of the model
	"""
	def __init__(self):
		self.settings = {}
		self.errors = []
		self.data = {}
		self.visible = True

		self.default_settings()

	def default_settings(self):
		self.settings['LineColor']='black'
		self.settings['LineStyle']='dashed'
		self.settings['LineWidth']=1.5

class Model2D(Model):

	def __init__(self, expression=None):
		super(Model2D, self).__init__()
		self.expression = expression
		self.type = '2d'
	
	def eval(self, domain):
		x = Symbol('x')
		f = lambdify(x, self.expression, "numpy")
		domain['y'] = f(domain['x'])
		return domain

	def draw(self, canvas, domain):
		if self.expression == None:
			data = self.data
		else:
			data = self.eval(domain)
		canvas.axes.plot(data['x'], data['y'])

class Model3D(Model):

	def __init__(self, expression=None):
		super(Model3D, self).__init__()
		self.expression = expression
		self.type = '3d'
	
	def eval(self, domain):
		domain['x'], domain['y'] = np.meshgrid(domain['x'], domain['y'])
		x = Symbol('x')
		y = Symbol('y')
		f = lambdify((x, y), self.expression, "numpy")
		domain['z'] = f(domain['x'], domain['y'])
		return domain

	def draw(self, canvas, domain):
		canvas.axes.mouse_init()
		if self.expression == None:
			canvas.axes.scatter(self.data['x'], self.data['y'], self.data['z'], c='r', marker='o')
		else:
			data = self.eval(domain)
			canvas.axes.plot_surface(data['x'], data['y'], data['z'], rstride=1, cstride=1, cmap=cm.coolwarm, linewidth=0, antialiased=False)
		
