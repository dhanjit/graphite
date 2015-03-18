__author__ = 'batman'
import sympy as sp
from model.BivariateExpression import *
from model.UnivariateExpression import *

class Parser(object):

    def __init__(self):
        pass

    def parse(self, string):
        if 'y' in string:
            return BivariateExpression(sp.sympify(string))
        else:
            return UnivariateExpression(sp.sympify(string))