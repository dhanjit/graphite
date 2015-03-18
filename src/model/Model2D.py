__author__ = 'batman'
from Model import *

class Model2D(Model):

    def __init__(self,plottable2d):
        super(Model2D, self).__init__()
        self.plottable2d = plottable2d
