from Model3D import Model3D

__author__ = 'batman'

class BivariateExpressionModel(Model3D):

    def __init__(self,bivariateExpression):
        super(BivariateExpressionModel, self).__init__()
        self.bivariateExpression = bivariateExpression