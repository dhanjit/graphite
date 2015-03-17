"""
Main Application Start
"""

import sys
from PyQt4 import QtGui

class plotterApp(QtGui.QMainWindow):
	
	def __init__(self, *args):
		super(plotterApp, self).__init__()
		self.initUI()
		return

	def initUI(self):
		self.initMenuBar()
		self.initToolBar()
		self.initStatusBar()

		self.initView()
		return

	def initView(self):
		pass

	def initToolBar(self):
		pass

	def initStatusBar(self):
		statusbar = self.statusBar()
		statusbar.message("Ready....")
		return

	def new_plot_handler():
		pass

	def initMenuBar(self):
		menubar = self.menuBar()

		file_menu = menubar.addMenu('&File')
		edit_menu = menubar.addMenu('&Edit')
		view_menu = menubar.addMenu('&View')
		window_menu = menubar.addMenu('&Window')
		help_menu = menubar.addMenu('&Help')

		# file menu actions
		new_action = QtGui.QAction('&New Plot', self)
		new_action.setShortcut('Ctrl+N') 
		new_action.setStatusTip('Create new plot')
		new_action.triggered.connect(self.new_plot_handler)
		file_menu.addAction(new_action)

		save_action = QtGui.QAction('&Save', self)
		save_action.setShortcut('Ctrl+S') 
		save_action.setStatusTip('Save current plot')
		#saveaction.triggered.connect('''implement the function to create new plot''')
		file_menu.addAction(save_action)

		exit_action = QtGui.QAction('&Exit', self)
		exit_action.setShortcut('Ctrl+Q') 
		exit_action.setStatusTip('Exit Application')
		exit_action.triggered.connect(QtGui.qApp.quit)
		file_menu.addAction(exit_action)

		# # view menu actions
		clear_action = QtGui.QAction('&Clear', self)
		clear_action.setShortcut('Ctrl+Shift+Q') 
		clear_action.setStatusTip('Clear current plot')
		#clearaction.triggered.connect('''implement the function to create new plot''')
		edit_menu.addAction(clear_action)


		# #adding actions to view menu
		# zoomInaction = QtGui.QAction('&Zoom In', self)
		# zoomInaction.setShortcut('Ctrl++') 
		# zoomInaction.setStatusTip('Centre zoom in on plot')
		# #zoomInaction.triggered.connect('''implement the function to create new plot''')
		# viewmenu.addAction(zoomInaction)

		# #adding actions to window menu
		# controlWindowaction = QtGui.QAction('&Calc Window', self)
		# controlWindowaction.setShortcut('Ctrl+W') 
		# controlWindowaction.setStatusTip('Calculator input window')
		# #docaction.triggered.connect('''implement the function to create new plot''')
		# windowmenu.addAction(controlWindowaction)

		# help menu actions
		doc_action = QtGui.QAction('&Documentation', self)
		#doc_action.setShortcut('Ctrl+H') 
		doc_action.setStatusTip('Documentation for the software')
		#doc_action.triggered.connect('''implement the function to create new plot''')
		help_menu.addAction(doc_action)

		about_action = QtGui.QAction('&About', self)
		#about_action.setShortcut('') 
		about_action.setStatusTip('About Software and Licenses')
		#aboutaction.triggered.connect('''implement the function to create new plot''')
		help_menu.addAction(about_action)

		return

def main(args):
	app = QtGui.QApplication(args)
	plotterview = plotterApp()
	plotterview.show()
	sys.exit(app.exec_())

if __name__ == '__main__':
	main(sys.argv)
