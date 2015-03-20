from PyQt4.QtGui import QWidget

class FileVisualizer(QWidget):
	def __init__(self, controller):
		super(FileVisualizer,self).__init__()
		self.controller = controller
		self.initUI()

	def initUI(self):
		pass
