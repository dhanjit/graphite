'''
This is main window. 
'''
import sys
from PyQt4 import QtGui, QtCore
from src.parser import *
from src.aggregator import *
from src.model import *

class plotterMain(QtGui.QMainWindow):
	
	def __init__(self):
		super(plotterMain, self).__init__()

		self.initUI()


	def initUI(self):
		#Creating menubar
		self.menubar()
		#self.layout()
		#
		#custumize window
		string = "sin(x)*x"
		myparse = Parser(string,2)
		myModel = myparse.createModel()
		
		_widget = QtGui.QWidget()
		myAgg = Aggregator(_widget)
		myAgg.insertModel(myModel)
		myAgg.compute_graph()

	 	main_layout = QtGui.QHBoxLayout(_widget)
	 	main_layout.addWidget(myAgg.canvas2D)
	 	self.setCentralWidget(_widget)

		self.setGeometry(150,150,800,500)
		self.setWindowTitle("Plotter")
		self.show()

	def menubar(self):
		menubar = self.menuBar()

		filemenu = menubar.addMenu('&File')
		editmenu = menubar.addMenu('&Edit')
		viewmenu = menubar.addMenu('&View')
		windowmenu = menubar.addMenu('&Window')
		helpmenu = menubar.addMenu('&Help')

		#adding actions to file menu
		newaction = QtGui.QAction('&New Plot', self)
		newaction.setShortcut('Ctrl+N') 
		newaction.setStatusTip('Create new plot')
		#newaction.triggered.connect('''implement the function to create new plot''')
		filemenu.addAction(newaction)

		saveaction = QtGui.QAction('&Save', self)
		saveaction.setShortcut('Ctrl+S') 
		saveaction.setStatusTip('Save current plot')
		#saveaction.triggered.connect('''implement the function to create new plot''')
		filemenu.addAction(saveaction)

		exitaction = QtGui.QAction('&Exit', self)
		exitaction.setShortcut('Ctrl+Q') 
		exitaction.setStatusTip('Exit Application')
		exitaction.triggered.connect(QtGui.qApp.quit)
		filemenu.addAction(exitaction)


		#adding actions to edit menu
		clearaction = QtGui.QAction('&Clear', self)
		clearaction.setShortcut('Ctrl+Shift+Q') 
		clearaction.setStatusTip('Clear current plot')
		#clearaction.triggered.connect('''implement the function to create new plot''')
		editmenu.addAction(clearaction)


		#adding actions to view menu
		zoomInaction = QtGui.QAction('&Zoom In', self)
		zoomInaction.setShortcut('Ctrl++') 
		zoomInaction.setStatusTip('Centre zoom in on plot')
		#zoomInaction.triggered.connect('''implement the function to create new plot''')
		viewmenu.addAction(zoomInaction)


		#adding actions to window menu
		controlWindowaction = QtGui.QAction('&Calc Window', self)
		controlWindowaction.setShortcut('Ctrl+W') 
		controlWindowaction.setStatusTip('Calculator input window')
		#docaction.triggered.connect('''implement the function to create new plot''')
		windowmenu.addAction(controlWindowaction)

		#adding actions to help menu
		docaction = QtGui.QAction('&Documentation', self)
		docaction.setShortcut('Ctrl+H') 
		docaction.setStatusTip('Documentation for the software')
		#docaction.triggered.connect('''implement the function to create new plot''')
		helpmenu.addAction(docaction)

		aboutaction = QtGui.QAction('&About', self)
		#controlWindowaction.setShortcut('Ctrl+') 
		aboutaction.setStatusTip('About Software and Licenses')
		#aboutaction.triggered.connect('''implement the function to create new plot''')
		helpmenu.addAction(aboutaction)

	


	# def layout(self):
	# 	self.inputwidget = inputWidget(self)
	# 	_widget = QtGui.QWidget()
	# 	main_layout = QtGui.QHBoxLayout(_widget)
	# 	main_layout.addWidget(self.inputwidget)
	# 	main_layout.addWidget(inputWidget(self))
	# 	self.setCentralWidget(_widget)
	# 	# self.setLayout(self.main_layout)
	# 	# self.display_layout = QtGui.QVBoxLayout(self)
	# 	# self.control_layout = QtGui.QVBoxLayout(self)
	# 	# self.calc_layout = QtGui.QGridLayout(self)

	# 	#making input layout

# class inputWidget(QtGui.QWidget):

# 	def __init__(self, parent):
# 		super(inputWidget, self).__init__(parent)
	
# 		self.input_layout = QtGui.QVBoxLayout()
# 		self.inputBox = QtGui.QLineEdit()
# 		# self.type2d = QtGui.QCheckBox("Single Variable")
# 		# self.type3d = QtGui.QCheckBox("Two Variable")
# 		# self.typeC = QtGui.QButtonGroup(self)
# 		# self.typeC.addButton(self.type2d)
# 		# self.typeC.addButton(self.type3d)

# 		self.plotButton = QtGui.QPushButton("Plot")
# 		self.addButton = QtGui.QPushButton("Add")

# 		# self.input_layout.addWidget(self.type2d)
# 		# self.input_layout.addWidget(self.type3d)
# 		self.input_layout.addWidget(self.inputBox)
# 		self.input_layout.addWidget(self.plotButton)
# 		self.input_layout.addWidget(self.addButton)
# 		# self.input_layout.resize(100,150)
# 		self.input_layout.addStretch()
# 		self.setLayout(self.input_layout)
# # class inputWindow()


def main():
	app = QtGui.QApplication(sys.argv)
	_plotMain = plotterMain()
	sys.exit(app.exec_())

if __name__ == '__main__':
	main()