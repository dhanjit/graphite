import sympy
from src.model.Expression2D import *
from src.model.Expression3D import *

class Parser(object):

    def __init__(self):
        self.expression = ""
        self.errors = []
        self.formatted = ""

    def parse(self, string):
        self.checkConsistency(string)

        if self.type == '3D':
            return Expression3D(self.expression)
        else:
            return Expression2D(self.expression)

    def checkConsistency(self, string):
        print 'parser ',(string)
        string = self.makeSympifiable(string)
        self.type = type
        string = str(string)
        self.expression = sympy.sympify(string)
        var_num = len(self.expression.free_symbols)
        if var_num == 2:
            self.type = '3D'
        elif var_num == 1:
            self.type = '2D'

    def makeSympifiable(self, string):
        temp = string
        if '=' in temp:
            temp = temp.split('=')[1]

        for i in range(10):
            if str(i)+'x' in temp:
                temp = temp.replace(str(i)+"x",str(i)+"*x")

        return temp