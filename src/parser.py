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

	def parse_expression(self, string):
		"""
		assuming string is parsable in sympy
		"""
		string = str(string)
		self.expression = sp.sympify(string)
		if string.find('y') == -1:
			model = Model2D(self.expression)
		else:
			model = Model3D(self.expression)
		return model
		
	def formatted_output(self):
		self.formatted = sp.latex(self.expression)
		return self.formatted

	def parse_file(self, filename):		
		data = {}
		model = None
		with open(filename, 'rb') as input:
			lines = input.read().decode(encoding='UTF-8').split('\n')[:-1]
			size = len(lines[0].split(' '))
			if size == 2:
				data['x'] = data['y'] = []
				for line in lines:
					t = [float(word) for word in line.split(' ')]
					data['x'].append(t[0])
					data['y'].append(t[1])
				data['z'] = [0 for x in data['x']]
				model = Model2D()
			else:
				data['x'] = data['y'] = data['z'] = []
				for line in lines:
					t = [float(word) for word in line.split(' ')]
					data['x'].append(t[0])
					data['y'].append(t[1])
					data['z'].append(t[2])
				model = Model3D()
			model.data = data			
		return model