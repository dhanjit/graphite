"""
Main Application Start
"""

import sys
from PyQt4 import QtGui
from src import *

class plotterApp(QtGui.QMainWindow):

	def __init__(self, *args):
		super(plotterApp, self).__init__()
		#self.setIcon()
		self.initUI()
		self.session = Session(self)

	def initUI(self):
		self.initMenuBar()
		self.initToolBar()
		self.initStatusBar()
		self.initView()

	def initView(self):
		pass

	def initToolBar(self):
		pass

	def initStatusBar(self):
		statusbar = self.statusBar()
		statusbar.message("Ready....")

	def new_tab(self):
		self.session.add_tab()
		
	def close_tab(self):
		self.session.close_tab()

	def save_tab(self):
		self.session.save_tab()
	
	def new_session(self):
		self.session.close()
		self.session = Session()

	def open_session(self):
		session_file_name = QtGui.QFileDialog.getOpenFileName(self, "Open Session", "")
		self.session.close()
		self.session.load(session_file_name)

	def save_session(self):
		session_file_name = QtGui.QFileDialog.getSaveFileName(self, "Save Session", "")
		self.session.save(session_file_name)

	def close_session(self):
		self.session.close()

	def initMenuBar(self):
		menubar = self.menuBar()

		file_menu = menubar.addMenu('File')
		edit_menu = menubar.addMenu('Edit')
		view_menu = menubar.addMenu('View')
		window_menu = menubar.addMenu('Window')
		session_menu = menubar.addMenu('Session')
		preferences_menu = menubar.addMenu('Preferences')
		help_menu = menubar.addMenu('Help')

		# file menu actions
		tab_new_action = QtGui.QAction('New Tab', self)
		tab_new_action.setShortcut('Ctrl+N') 
		tab_new_action.setStatusTip('Open New Tab')
		tab_new_action.triggered.connect(self.new_tab)
		file_menu.addAction(tab_new_action)

		# session menu
		session_new_action = QtGui.QAction('New Session', self)
		session_new_action.setShortcut('Ctrl+Shift+N')
		session_new_action.setStatusTip('Open New Session')
		session_new_action.triggered.connect(self.new_session)
		file_menu.addAction(session_new_action)

		tab_save_action = QtGui.QAction('Save Tab', self)
		tab_save_action.setShortcut('Ctrl+S')
		tab_save_action.setStatusTip('Save Current Plot')
		tab_save_action.triggered.connect(self.save_tab)
		file_menu.addAction(tab_save_action)

		tab_close_action = QtGui.QAction('Close Tab', self)
		tab_close_action.setShortcut('Ctrl+W') 
		tab_close_action.setStatusTip('Close Tab')
		tab_close_action.triggered.connect(self.close_tab)
		file_menu.addAction(tab_close_action)

		exit_action = QtGui.QAction('Exit', self)
		exit_action.setShortcut('Ctrl+Q') 
		exit_action.setStatusTip('Exit Application')
		exit_action.triggered.connect(QtGui.qApp.quit)
		file_menu.addAction(exit_action)

		# # view menu actions
		clear_action = QtGui.QAction('Clear', self)
		clear_action.setShortcut('Ctrl+Shift+Q') 
		clear_action.setStatusTip('Clear current plot')
		#clearaction.triggered.connect('''implement the function to create new plot''')
		edit_menu.addAction(clear_action)		

		# project menu actions
		session_open_action = QtGui.QAction('Open Session..', self)
		#session_open_action.setShortcut('Ctrl+Shift+O')
		session_open_action.setStatusTip('Open New Session')
		session_open_action.triggered.connect(self.open_session)
		session_menu.addAction(session_open_action)

		session_recent_action = QtGui.QAction('Open Recent', self)
		#session_recent_action.setShortcut('Ctrl+Shift+O')
		session_recent_action.setStatusTip('Open Recent Session')
		#session_recent_action.connect('''implement the function to create new plot''')
		session_menu.addAction(session_recent_action)

		session_save_action = QtGui.QAction('Save Session As..', self)
		#session_save_action.setShortcut('Ctrl+Shift+S')
		session_save_action.setStatusTip('Save Current Session')
		session_save_action.triggered.connect(self.save_session)
		session_menu.addAction(session_save_action)

		session_close_action = QtGui.QAction('Close Session', self)
		#session_close_action.setShortcut('Ctrl+Shift+S')
		session_close_action.setStatusTip('Close Current Session')
		session_close_action.triggered.connect(self.close_session)
		session_menu.addAction(session_close_action)

		# preferences menu actions
		settings_action = QtGui.QAction('Settings', self)
		#session_close_action.setShortcut('Ctrl+Shift+S')
		settings_action.setStatusTip('Close Current Session')
		#settings_action.triggered.connect(self.settings)
		preferences_menu.addAction(settings_action)

		# help menu actions
		doc_action = QtGui.QAction('Documentation', self)
		doc_action.setShortcut('Ctrl+H')
		doc_action.setStatusTip('Documentation for the software')
		#doc_action.triggered.connect('''implement the function to create new plot''')
		help_menu.addAction(doc_action)

		about_action = QtGui.QAction('About', self)
		about_action.setShortcut('') 
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
