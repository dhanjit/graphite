from PyQt4.QtGui import QWidget, QVBoxLayout
from src.ui.input.tableinput .TableInput import TableInput
from src.model.Plottable2D import *
from src.model.Plottable3D import *
from src.model.Point2D import *

class FileVisualizer(QWidget):
	def __init__(self, controller):
		super(FileVisualizer,self).__init__()
		self.controller = controller
		self.tableinput = TableInput(plottable=Plottable2D(x=[1,2,3,4],y=[5,6,7,8]))
		self.initUI()

	def initUI(self):
		layout = QVBoxLayout()
		layout.addWidget(self.tableinput)
		layout.addStretch()
		self.setLayout(layout)

	def setTableData(self, plottable):
		self.tableinput.updateTable(plottable)


