import sympy
from src.model.Expression2D import *
from src.model.Expression3D import *

class Parser(object):

    def __init__(self):
        self.expression = ''
        self.errors = []
        self.formatted = ""
        self.type =None

    def parse(self, string):
        self.checkConsistency(string)
        print(self.type)
        if self.type == '3D':
            return Expression3D(self.expression)
        else:
            return Expression2D(self.expression)

    def checkConsistency(self, string):
        print 'parser ',(string)
        string = self.makeSympifiable(string)
        self.type = type
        string = str(string)
        try:
			self.expression = sympy.sympify(string)
			var_num = len(self.expression.free_symbols)
			if var_num == 2 and not self.type:
				self.type = '3D'
			elif var_num == 1 and not self.type:
				self.type = '2D'
			elif not self.type:
				self.type = 'NP'
				raise Exception('Not plottable in 2d or 3d!')
        except Exception, e:
	        print('Not Parsable '+repr(e))

    def makeSympifiable(self, string):
        temp = string

        if '=' in temp:
	        z = temp.split('=')[0]
	        temp = temp.split('=')[1]
	        if 'z' in z:
		        self.type = '3D'

        for i in range(10):
            if str(i)+'x' in temp:
                temp = temp.replace(str(i)+"x",str(i)+"*x")
		for i in range(10):
			if str(i)+'y' in temp:
				temp = temp.replace(str(i)+"y",str(i)+"*y")
		for i in range(10):
			if str(i)+'(' in temp:
				temp = temp.replace(str(i)+"(",str(i)+"*(")
		for i in range(10):
			if str(i)+'x' in temp:
				temp = temp.replace(str(i)+"x",str(i)+"*x")

        return temp
