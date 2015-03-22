from src.model.Point2D import Point2D
from src.model.Point3D import Point3D
import os
from src.model.Plottable2D import *
from src.model.Plottable3D import *
class FileFormatHandler(object):
	def __init__(self):
		self.extensions = []
	def handlePlotPoints(self, filename):
		lines = [line.strip() for line in open(filename)]
		pl=[]
		typer="2D"
		lineNumber=0
		for line in lines:
			if len(line)==0:
				continue
			if line[0]=='#':
				continue
			store=line.split()
			if lineNumber==0:
				if len(store)==2:
					typer="2D"
					pl.append(Point2D(int(store[0]),int(store[1])))
				elif len(store)==3:
					typer="3D"
					pl.append(Point3D(int(store[0]),int(store[1]),int(store[2])))
				else:
					print("Wrong Input Format1")
					break
			else :
				if typer==str(len(store))+"D":
					if len(store)==2 :
						pl.append(Point2D(int(store[0]),int(store[1])))
					elif len(store)==3:
						pl.append(Point3D(int(store[0]),int(store[1]),int(store[2])))
					else:
						print("Wrong Input Format2")
						break
				else:
					print("Wrong Input Format3")
					break
			lineNumber+=1

		if typer=='2D':
			return Plottable2D(pl)
		else:
			return Plottable3D(pl)
	def handle(self, filename):
		extension = os.path.splitext(filename)
		if extension not in self.extensions:
			plottable = self.handlePlotPoints(filename)
			return plottable
		else:
			pass



# def main():
# 	fl=FileFormatHandler()
# 	pl=fl.handle("foo.txt")
# 	for point in pl:
# 		print point.x, point.y

# if __name__ == '__main__':
# 	main()
