__author__ = 'batman'
from Point3D import Point3D
from Point2D import Point2D
class FileFormatHandler(object):
    def __init__(self):
        pass
    # Reads from a file and returns a list of objects of type Point
    def handle(self, fileName):
      	lines=[]
      	with open(fileName) as f:
	    	lines=f.readlines()

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
	  				pl.append(Point2D(int(store[0]),int(store[1])));
	  			elif len(store)==3:
	  				typer="3D"
	  				pl.append(Point3D(int(store[0]),int(store[1]),int(store[2])));
	  			else:
	  				print "Wrong Input Format"
	  				break
	  		else:
	  			if typer==str(len(store))+"D":
	  				if len(store)==2 :
	  					pl.append(Point2D(int(store[0]),int(store[1])));
	  				elif len(store)==3:
	  					pl.append(Point3D(int(store[0]),int(store[1]),int(store[2])));
	  				else:
	  					print "Wrong Input Format"
	  					break
	  			else:
  					print "Wrong Input Format"
  					break
  			lineNumber+=1
  		return pl

# def main():
# 	fl=FileFormatHandler()
# 	pl=fl.handle("foo.txt")
# 	for point in pl:
# 		print point.x, point.y

# if __name__ == '__main__':
# 	main()
