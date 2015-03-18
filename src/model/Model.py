__author__ = 'batman'
from BivariateExpressionModel import *
from UnivariateExpressionModel import *
from BivariateExpression import *
from UnivariateExpression import *
from Plottable2D import *
from Plottable3D import *

class Model(object):

    def __init__(self):
        pass

    @staticmethod
    def createModelFromExpression(parser,string):
        expr = parser.parse(string)
        if isinstance(expr,UnivariateExpression):
            return UnivariateExpressionModel(expr)
        elif isinstance(expr,BivariateExpression) :
            return BivariateExpressionModel(expr)
        else:
            raise Exception(expr)

    @staticmethod
    def createModelFromFile(formatHandler,file):
        plottable = formatHandler.handle(file)
        if isinstance(plottable, Plottable2D):
            return Model2D(plottable)
        elif isinstance(plottable,Plottable3D) :
            return Model3D(plottable)
        else:
            raise Exception(plottable)
