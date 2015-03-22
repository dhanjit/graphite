from PyQt4 import QtGui, QtCore
from PyQt4.QtCore import *
from PyQt4.QtGui import *
import sys

class ModelSettingsTable(QtGui.QWidget):

	def __init__(self,model,type):
		super(ModelSettingsTable,self).__init__()
		self.modelSet = model
		self.temp = {}
		if(type=="2D"):
			self.initUI2D()
		elif(type=="3D"):
			self.initUI3D()
		self.center()
		self.show()


	def initUI2D(self):
		table = QtGui.QTableWidget(len(self.modelSet),2)
		table.setSizePolicy(QtGui.QSizePolicy.Expanding,QtGui.QSizePolicy.Expanding)
		table.setHorizontalHeaderLabels(["Attribute","Value"])
		table.setItem(0,0,QtGui.QTableWidgetItem("Colour"))
		colorbtn = QtGui.QPushButton("Choose")
		colorbtn.setStyleSheet("color: black; background-color: red; font: bold")
		table.setCellWidget(0,1,colorbtn)
		table.setItem(1,0,QtGui.QTableWidgetItem("Width"))
		widthspin = QtGui.QSpinBox()
		widthspin.setValue(self.modelSet["Width"])
		table.setCellWidget(1,1,widthspin)
		table.setItem(2,0,QtGui.QTableWidgetItem("Line Fill"))
		fillcombo = QtGui.QComboBox()
		fillcombo.addItem("-")
		fillcombo.addItem("--")
		fillcombo.addItem("-.")
		fillcombo.addItem(":")
		table.setCellWidget(2,1,fillcombo)
		table.setItem(3,0,QtGui.QTableWidgetItem("Transparency"))
		transspin = QtGui.QDoubleSpinBox()
		transspin.setRange(0.0,1.0)
		transspin.setSingleStep(0.1)
		table.setCellWidget(3,1,transspin)
		transspin.setValue(self.modelSet["Transparency"])
		table.horizontalHeader().setResizeMode(QtGui.QHeaderView.Stretch)
		table.verticalHeader().setVisible(False)
		table.resizeColumnsToContents()
		table.resizeRowsToContents()
		grid = QtGui.QGridLayout()
		grid.addWidget(table)
		btn = QtGui.QPushButton("Save")
		grid.addWidget(btn)
		self.setLayout(grid)

		self.connect(colorbtn,QtCore.SIGNAL("clicked()"),self.setColor)
		self.connect(widthspin,QtCore.SIGNAL("valueChanged(int)"),self.setWidth)
		self.connect(fillcombo,QtCore.SIGNAL("activated(QString)"),self.setFill)
		self.connect(btn,QtCore.SIGNAL("clicked()"),self.save)



	def initUI3D(self):
		table = QtGui.QTableWidget(len(self.modelSet),2)
		table.setSizePolicy(QtGui.QSizePolicy.Expanding,QtGui.QSizePolicy.Expanding)
		table.setHorizontalHeaderLabels(["Attribute","Value"])
		table.setItem(0,0,QtGui.QTableWidgetItem("Colour"))
		colorbtn = QtGui.QPushButton("Choose")
		colorbtn.setStyleSheet("color: black; background-color: red; font: bold")
		table.setCellWidget(0,1,colorbtn)
		table.setItem(1,0,QtGui.QTableWidgetItem("Shade"))
		shadecheck = QtGui.QCheckBox("Apply")
		shadecheck.setChecked(False)
		table.setCellWidget(1,1,shadecheck)
		table.horizontalHeader().setResizeMode(QtGui.QHeaderView.Stretch)
		table.verticalHeader().setVisible(False)
		table.resizeColumnsToContents()
		table.resizeRowsToContents()
		grid = QtGui.QGridLayout()
		grid.addWidget(table)
		btn = QtGui.QPushButton("Save")
		grid.addWidget(btn)
		self.setLayout(grid)

		self.connect(colorbtn,QtCore.SIGNAL("clicked()"),self.setColor)
		self.connect(shadecheck,QtCore.SIGNAL("valueChanged(int)"),self.setShade)
		self.connect(btn,QtCore.SIGNAL("clicked()"),self.save)


	def setColor(self):
		colordialog = QtGui.QColorDialog.getColor()
		if colordialog.isValid():
			btn = self.sender()
			btn.setStyleSheet("background-color:"+colordialog.name())
			self.temp["Color"] = QtGui.QColor(colordialog.name())


	def setWidth(self):
		self.temp["Width"] = self.sender().value()


	def setFill(self,text):
		self.temp["Line Fill"] = str(text)

	def save(self):
		self.modelSet = self.temp
		self.close()

	def center(self):
		qr = self.frameGeometry()
		cp = QtGui.QDesktopWidget().availableGeometry().center()
		qr.moveCenter(cp)
		self.move(qr.topLeft())

	def setShade(self):
		if self.sender():
			self.temp["Shade"] = True
		else:
			self.temp["Shade"] = False




