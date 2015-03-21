from PyQt4.QtGui import QTabWidget
from src.ui.input.Calculator import Calculator
from src.ui.input.FileVisualizer import FileVisualizer
class Input(QTabWidget):
	def __init__(self, controller):
		super(Input,self).__init__()
		self.filevisualizer = FileVisualizer(controller)
		self.calculator = Calculator(controller)
		self.initUI()

	def initUI(self):
		self.addTab(self.calculator,"Function")
		self.addTab(self.filevisualizer,"File")