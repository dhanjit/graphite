from Plottable import Plottable
class Plottable3D(Plottable):

    def __init__(self, points):
        super(Plottable3D, self).__init__()
        self.points = points