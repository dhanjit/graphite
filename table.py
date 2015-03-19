from Point  import Point2D , Point3D
import sys
from PyQt4 import QtGui, QtCore
from PyQt4.QtCore import *
from PyQt4.QtGui import *

class QCustomTableWidget2D (QtGui.QTableWidget):
	def __init__ (self, pt2d,parent):
		super(QCustomTableWidget2D, self).__init__(parent)
		self.focusKeyboardOn = False
		self.setRowCount(len(pt2d))
		self.setColumnCount(2)
		self.setGeometry(0,0,2,4)
		listsHorizontalHeaderItem = ['X', 'Y']
		self.setColumnCount(len(listsHorizontalHeaderItem))
		for index in range(self.columnCount()):
			self.setHorizontalHeaderItem(index, QtGui.QTableWidgetItem(listsHorizontalHeaderItem[index]))



	def dataChanged (self, topLeftQModelIndex, bottomRightQModelIndex):
		row                  = topLeftQModelIndex.row()
		column               = topLeftQModelIndex.column()
		dataQTableWidgetItem = self.item(row, column)
		if (self.currentItem() == dataQTableWidgetItem) and (self.focusKeyboardOn == True):
			self.emit(QtCore.SIGNAL('currentKeyboardDataChanged'), row, column, dataQTableWidgetItem)
		self.emit(QtCore.SIGNAL('dataChanged'), row, column, dataQTableWidgetItem)
		QtGui.QTableWidget.dataChanged(self, topLeftQModelIndex, bottomRightQModelIndex)

	def focusInEvent (self, eventQFocusEvent):
		self.focusKeyboardOn = False
		QtGui.QTableWidget.focusInEvent(self, eventQFocusEvent)

	def focusOutEvent (self, eventQFocusEvent):
		self.focusKeyboardOn = True
		QtGui.QTableWidget.focusOutEvent(self, eventQFocusEvent)




class QCustomTableWidget3D (QtGui.QTableWidget):
	def __init__ (self, pt3d,parent):
		super(QCustomTableWidget3D, self).__init__(parent)
		self.focusKeyboardOn = False
		self.setRowCount(len(pt3d))
		self.setColumnCount(3)
		self.setGeometry(0,0,2,4)
		listsHorizontalHeaderItem = ['X', 'Y','Z']
		self.setColumnCount(len(listsHorizontalHeaderItem))
		for index in range(self.columnCount()):
			self.setHorizontalHeaderItem(index, QtGui.QTableWidgetItem(listsHorizontalHeaderItem[index]))



	def dataChanged (self, topLeftQModelIndex, bottomRightQModelIndex):
		row                  = topLeftQModelIndex.row()
		column               = topLeftQModelIndex.column()
		dataQTableWidgetItem = self.item(row, column)
		if (self.currentItem() == dataQTableWidgetItem) and (self.focusKeyboardOn == True):
			self.emit(QtCore.SIGNAL('currentKeyboardDataChanged'), row, column, dataQTableWidgetItem)
		self.emit(QtCore.SIGNAL('dataChanged'), row, column, dataQTableWidgetItem)
		QtGui.QTableWidget.dataChanged(self, topLeftQModelIndex, bottomRightQModelIndex)

	def focusInEvent (self, eventQFocusEvent):
		self.focusKeyboardOn = False
		QtGui.QTableWidget.focusInEvent(self, eventQFocusEvent)

	def focusOutEvent (self, eventQFocusEvent):
		self.focusKeyboardOn = True
		QtGui.QTableWidget.focusOutEvent(self, eventQFocusEvent)




class  tableplot(QtGui.QMainWindow):
	
	def __init__(self):
		super(tableplot, self).__init__()

		self.initUI()


	def initUI(self):
		self.setGeometry(150,150,800,500)
		self.setWindowTitle("        Print Table     ")
		#include examples
		pt2d = []
		pt2d.append(Point3D(1,3,1))
		pt2d.append(Point3D(1,3,2))
		pt2d.append(Point3D(1,3,5))
		pt2d.append(Point3D(1,3,6))
		self.table3D(pt2d)
		self.show()


	def table2D(self , pt2d):
		self.myQCustomTableWidget2D = QCustomTableWidget2D(pt2d,self)
		self.connect(self.myQCustomTableWidget2D, QtCore.SIGNAL('currentKeyboardDataChanged'), self.setTrackData2D)	
		self.pt2d_plot = pt2d
		for x in range(0,len(pt2d)): 
			X = pt2d[x].getX() 
			Y = pt2d[x].getY() 
			self.myQCustomTableWidget2D.setItem(x , 0 , QtGui.QTableWidgetItem(str(X))) 
			self.myQCustomTableWidget2D.setItem(x , 1 , QtGui.QTableWidgetItem(str(Y))) 
		self.myQCustomTableWidget2D.setGeometry(0,0,800,500) 	
		 


	def setTrackData2D (self, row, column, dataQTableWidgetItem):
		#self.myQLabel.setText('Last updated\nRow : %d, Column : %d, Data : %s' % (row + 1, column + 1, str(dataQTableWidgetItem.text())))
		print "hi"
		x = float(dataQTableWidgetItem.text())
		if column == 0 :
			self.pt2d_plot[row].setX(x)
		elif column == 1 :
			self.pt2d_plot[row].setY(x)
		
		for i in range(0,self.myQCustomTableWidget2D.rowCount()):
			print str(self.pt2d_plot[i].getX())+"  "+ str(self.pt2d_plot[i].getY())	



	def table3D(self , pt3d):
		self.myQCustomTableWidget3D = QCustomTableWidget3D(pt3d,self)
		self.connect(self.myQCustomTableWidget3D, QtCore.SIGNAL('currentKeyboardDataChanged'), self.setTrackData3D)	
		self.pt3d_plot = pt3d
		for x in range(0,len(pt3d)): 
			X = pt3d[x].getX() 
			Y = pt3d[x].getY()
			Z = pt3d[x].getZ() 
			self.myQCustomTableWidget3D.setItem(x , 0 , QtGui.QTableWidgetItem(str(X))) 
			self.myQCustomTableWidget3D.setItem(x , 1 , QtGui.QTableWidgetItem(str(Y)))
			self.myQCustomTableWidget3D.setItem(x , 2 , QtGui.QTableWidgetItem(str(Z))) 
		self.myQCustomTableWidget3D.setGeometry(0,0,800,500) 	
		 


	def setTrackData3D (self, row, column, dataQTableWidgetItem):
		#self.myQLabel.setText('Last updated\nRow : %d, Column : %d, Data : %s' % (row + 1, column + 1, str(dataQTableWidgetItem.text())))
		print "hi"
		x = float(dataQTableWidgetItem.text())
		if column == 0 :
			self.pt3d_plot[row].setX(x)
		elif column == 1 :
			self.pt3d_plot[row].setY(x)
		elif column == 2 :
		    self.pt3d_plot[row].setZ(x)	
		
		for i in range(0,self.myQCustomTableWidget3D.rowCount()):
			print str(self.pt3d_plot[i].getX())+"  "+ str(self.pt3d_plot[i].getY())+"  "+ str(self.pt3d_plot[i].getZ())		


def main():
	app = QtGui.QApplication(sys.argv)
	table45 = tableplot()
	sys.exit(app.exec_())

if __name__ == '__main__':
	main()






