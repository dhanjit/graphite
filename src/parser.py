import sympy as sp
import sys
from src.model import *

class Parser:
	"""
	Parses a given string using python sympy
	"""

	def __init__(self):
		self.expression = ""
		self.errors = []
		self.formatted = ""

	def parse(self, string):
		"""
		assuming string is parsable in sympy
		"""
		string = str(string)
		self.expression = sp.sympify(string)
		model = Model2D(self.expression)
		return model
		
	def formatted_output(self):
		self.formatted = sp.latex(self.expression)
		return self.formatted