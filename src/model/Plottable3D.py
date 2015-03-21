from Plottable import Plottable
class Plottable3D(Plottable):

	def __init__(self, points=list(), x=list(), y=list(), z=list()):
		super(Plottable3D, self).__init__()
		self.x = x
		self.y = y
		self.z = z
		self.addPoints(points)

	def addPoints(self, points=list()):
		for point in points:
			self.x.append(point.getX())
			self.y.append(point.getY())
			self.z.append(point.getZ())

	def setPoints(self,x,y,z):
		self.x = x
		self.y = y
		self.z = z