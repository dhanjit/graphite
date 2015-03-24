from graphite.model.Plottable import Plottable

class Plottable2D(Plottable):

	def __init__(self, points=list(), x=list(), y=list()):
		super(Plottable2D, self).__init__()
		self.x = x
		self.y = y
		self.addPoints(points)

	def addPoints(self, points):
		for point in points:
			self.x.append(point.getX)
			self.y.append(point.getY())

	def setPoints(self,x,y):
		self.x = x
		self.y = y

	def getDimension(self):
		return 2

	def getType(self):
		return '2D'
