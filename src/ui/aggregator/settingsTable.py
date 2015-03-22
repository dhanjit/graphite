from PyQt4 import QtGui, QtCore
from PyQt4.QtCore import *
from PyQt4.QtGui import *
import sys

class ModelSettingsTable(QtGui.QWidget):

	def __init__(self,model):
		super(ModelSettingsTable,self).__init__()
		self.modelSet = model
		self.temp = {}
		# self.modelSet["Color"] = QtGui.QColor("red")
		# self.modelSet["Width"] = 1
		# self.modelSet["Line fill"] = "-"
		# self.modelSet["Transparency"] = 1.0
		self.initUI()
		# self.move()
		# self.setWindowFlags(Qt.Popup)
		# self.setAttribute(Qt.WA_QuitOnClose)
		self.center()
		self.show()
		# self.setFocus()
		# self.raise_()


	def initUI(self):
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

# app = QtGui.QApplication(sys.argv)
# set = ModelSettings()
# app.exec_()



