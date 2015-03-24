from PyQt4.QtGui import *
from PyQt4.QtCore import *
from src.ui.input.tableinput .TableInput import TableInput
from src.model.Plottable2D import *
from src.model.Plottable3D import *
from src.model.Point2D import *

class FileVisualizer(QWidget):
	def __init__(self, controller):
		super(FileVisualizer,self).__init__()
		self.controller = controller
		self.tableinput = TableInput()
		self.initUI()

	def initUI(self):
		layout = QVBoxLayout()

		self.openbtn = QPushButton("OPEN")
		self.clearbtn = QPushButton("CLEAR")
		hlayout = QHBoxLayout()
		hlayout.addWidget(self.openbtn)
		hlayout.addWidget(self.clearbtn)
		
		layout.addLayout(hlayout)
		layout.addWidget(self.tableinput)
		layout.addStretch()
		self.setLayout(layout)

		self.connect(self.openbtn,SIGNAL("clicked()"), self.open_btn_handler)
		self.connect(self.clearbtn,SIGNAL("clicked()"), self.clear_btn_handler)

	def setTableData(self, plottable):
		self.tableinput.updateTable(plottable)

	def open_btn_handler(self):
		filename = QFileDialog.getOpenFileName(self, "Open Plot Data File", "")
		filename = str(filename)
		self.controller.plotInput(input=filename, isfile=True)

	def clear_btn_handler(self):
		raise Exception('not handled in FileVisualizer.py\n')



