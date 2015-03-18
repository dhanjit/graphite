from Model2D import Model2D

__author__ = 'batman'

class UnivariateExpressionModel(Model2D):

    def __init__(self,univariateExpression):
        super(UnivariateExpressionModel, self).__init__()
        self.univariateExpression = univariateExpression