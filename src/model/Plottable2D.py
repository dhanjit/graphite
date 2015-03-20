from Plottable import Plottable
class Plottable2D(Plottable):

    def __init__(self, points):
        super(Plottable2D, self).__init__()
        self.points = points