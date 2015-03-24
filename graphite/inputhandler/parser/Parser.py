import sympy
from graphite.model.Expression2D import *
from graphite.model.Expression3D import *

class Parser(object):
	def __init__(self):
		self.expression = ''
		self.errors = []
		self.formatted = ""
		self.type =None

	def parse(self, string):
		self.checkConsistency(string)
		print("Expression type: ", self.type)
		if self.type == '3D':
			return Expression3D(self.expression)
		else:
			return Expression2D(self.expression)

	def checkConsistency(self, string):
		print('parser ', string)
		string = self.makeSympifiable(string)
		try:
			self.expression = sympy.sympify(string)
			print("parsing ... ", str(self.expression))
			var_num = len(self.expression.free_symbols)
			if var_num == 2 :
				self.type = '3D'
			elif var_num == 1 :
				self.type = '2D'
			elif not self.type:
				raise Exception('Not plottable in 2d or 3d!')
		except:
			print('Not Parsable '+repr(e))

	def makeSympifiable(self, string):
		temp = str(string)

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
		if 'x(' in temp:
			temp = temp.replace('x(','x*(')
		if 'y(' in temp:
			temp = temp.replace('y(','y*(')

		if 'xy' in temp:
			temp = temp.replace('xy','x*y')
		if 'yx' in temp:
			temp = temp.replace('yx','y*x')

		for c in ['s','c','e','x','y','a','t','l']:
			if ')'+c in temp:
				temp = temp.replace(')'+c,')*'+c)
			if 'x'+c in temp:
				temp = temp.replace('x'+c,'x*'+c)
			if 'y'+c in temp:
				temp = temp.replace('y'+c,'y*'+c)
		'''
		Handling cosec, sec ,cot
		'''
		j = temp.find('cosec(')
		while j!=-1:
			a='('
			j+=6
			br = '('
			n = len(temp)
			for i in range(j,n):
				a += temp[i]
				if temp[i]=='(':
					br += temp[i]
				if temp[i]==')':
					br = br[:-1]
				if len(br)==0:
					break

			temp = temp.replace('cosec'+a,'(1/sin'+a+')')
			j = temp.find('cosec(')

		j = temp.find('sec(')
		while j!=-1:
			a='('
			j+=4
			br = '('
			n = len(temp)
			for i in range(j,n):
				a += temp[i]
				if temp[i]=='(':
					br += temp[i]
				if temp[i]==')':
					br = br[:-1]
				if len(br)==0:
					break

			temp = temp.replace('sec'+a,'(1/cos'+a+')')
			j = temp.find('sec(')

		j = temp.find('cot(')
		while j!=-1:
			a='('
			j+=4
			br = '('
			n = len(temp)
			for i in range(j,n):
				a += temp[i]
				if temp[i]=='(':
					br += temp[i]
				if temp[i]==')':
					br = br[:-1]
				if len(br)==0:
					break

			temp = temp.replace('cot'+a,'(1/tan'+a+')')
			j = temp.find('cot(')

		return temp
