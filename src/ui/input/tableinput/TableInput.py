from PyQt4.QtGui import QTableWidget, QTableWidgetItem, QHeaderView, QSizePolicy
from PyQt4 import QtCore
from src.model.Plottable2D import Plottable2D

class TableInput(QTableWidget):
	def __init__(self, plottable=Plottable2D()):
		super(TableInput,self).__init__()

		self.plottable = plottable
		self.focusKeyboardOn = False
		self.headers = []
		self.initCustoms(type=plottable.getType())
#		self.headers = TableInput.getHeaders(type)
		self.initCustoms(type=plottable.getType())
		self.initUI()

	@staticmethod
	def getHeaders(type):
		if type == '2D':
			return ['X', 'Y']
		elif type == '3D':
			return ['X', 'Y', 'Z']
		else:
			raise Exception("Invalid type, No headers")

	def initCustoms(self,type):
		self.setRowCount(self.plottable.size())
		self.headers = TableInput.getHeaders(type)
		self.setColumnCount(len(self.headers))
		self.setHeaders(self.headers)

	def initUI(self):
		self.setGeometry(0,0,2,4)
		self.horizontalHeader().setStretchLastSection(True)
		self.horizontalHeader().setResizeMode(QHeaderView.Stretch)
		self.setSizePolicy(QSizePolicy.Expanding,QSizePolicy.Expanding)

	def setHeaders(self, headers=list() ):
		if len(headers) == 0:
			self.headers = headers
		for index in range(self.columnCount()):
			self.setHorizontalHeaderItem(index, QTableWidgetItem(self.headers[index]))

	def dataChanged(self, topLeftQModelIndex, bottomRightQModelIndex):
		row                  = topLeftQModelIndex.row()
		column               = topLeftQModelIndex.column()
		dataQTableWidgetItem = self.item(row, column)
		if (self.currentItem() == dataQTableWidgetItem) and (self.focusKeyboardOn == True):
			self.emit(QtCore.SIGNAL('currentKeyboardDataChanged'), row, column, dataQTableWidgetItem)
		self.emit(QtCore.SIGNAL('dataChanged'), row, column, dataQTableWidgetItem)
		QTableWidget.dataChanged(self, topLeftQModelIndex, bottomRightQModelIndex)


	def focusInEvent (self, eventQFocusEvent):
		self.focusKeyboardOn = False
		QTableWidget.focusInEvent(self, eventQFocusEvent)

	def focusOutEvent (self, eventQFocusEvent):
		self.focusKeyboardOn = True
		QTableWidget.focusOutEvent(self, eventQFocusEvent)

	def setTrackData (self, row, column, dataQTableWidgetItem):
		x = float(dataQTableWidgetItem.text())
		#self.plottable[row][column] = x
		if column == 0 :
			self.plottable.x[row] = x
		elif column == 1 :
			self.plottable.y[row] = x
		elif column == 2 :
			self.plottable.z[row] = x

	def updateTable(self, plottable):
		self.plottable = plottable
		self.initCustoms(type=plottable.getType())
		self.setData()

	def setData(self):
		print self.plottable.x
		for row in range(self.plottable.size()):
			self.setItem(row,0,QTableWidgetItem(str(self.plottable.x[row])))
			self.setItem(row,1,QTableWidgetItem(str(self.plottable.y[row])))
			if self.plottable.getDimension() == 3:
				self.setItem(row,2,QTableWidgetItem(str(self.plottable.z[row])))