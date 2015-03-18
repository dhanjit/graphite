__author__ = 'batman'
from Model import *

class Model3D(Model):
    
    def __init__(self,plottable3d):
        super(Model3D, self).__init__()
        self.plottable3d = plottable3d
    