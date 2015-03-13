import sympy as sp

class Parser():
	"""
	uses sympy
	"""

	def __init__(self,string,num):
		self.parse(string,num)

	def parse(self, string,num):
		"""
		assuming string is parsable in sympy
		"""

		self.numVar = num
		self.input_string = string
		self.expr = sp.sympify(self.input_string)
		self.errors = []
		
	def texOutput(self):
		latex_string = sp.latex(self.expr)
		return latex_string
	

	def getInput(self):
		return self.input_string

	def createModel(self):
		"""
		call this function to createModel instead of parse
		"""
		if num == 2:
			model = Model2D()
			model.expression = self.expr
			#model.settings to be decided
		else:
			model = Model2D()
			model.expression = self.expr
			#model.settings to be decided

		return model
