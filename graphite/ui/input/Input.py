from PyQt4.QtGui import QTabWidget, QTabBar, QCompleter, QStringListModel
from PyQt4.QtCore import QSize
from graphite.ui.input.Calculator import Calculator
from graphite.ui.input.FileVisualizer import FileVisualizer


class Input(QTabWidget):
	def __init__(self, controller, completer=QCompleter()):
		super(Input, self).__init__()
		self.filevisualizer = FileVisualizer(controller)
		self.calculator = Calculator(controller, completer)
		self.initUI()

	def initUI(self):
		tabbar = self.TabBarStretched()
		self.addTab(self.calculator, "Function")
		self.addTab(self.filevisualizer, "File")
		tabbar.addTab("Function")
		tabbar.addTab("File")
		self.setTabBar(tabbar)

	class TabBarStretched(QTabBar):
		def tabSizeHint(self, index):
			size = QSize(0, 0)
			qr = self.frameGeometry()

			for i in range(self.count() - 1):
				size += QTabBar.tabSizeHint(self, i)
			return QSize(qr.width() / self.count(), 30)

# size = QSize(0,0)
#		qt = self.tabBar().frameGeometry()
#		self.tabBar().tabSizeHint()



