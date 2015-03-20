__author__ = 'batman'
import sympy
from src.model.Expression2D import *
from src.model.Expression3D import *

class Parser(object):

	def __init__(self):
		self.expression = ''
		self.errors = []
		self.formatted = ''

	def parse(self, string):
		self.checkConsistency(self.expression)

		if self.type == '3D':
			return Expression3D(self.expression)
		else:
			return Expression2D(self.expression)

	def checkConsistency(self, string):
		type = '2D'
		string = self.makeSympifiable(string)
		self.type = type
		self.expression = sympy.sympify(string)

	def makeSympifiable(self, string):
		string.replace("^","**")
		return string