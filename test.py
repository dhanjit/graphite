import unittest, sys
import numpy as np
from PyQt4 import QtGui, QtCore
from graphite.session.Session import Session
from graphite.ui.AboutPopUp import AboutPopUp
from graphite.ui import *
from graphite.model.Model import Model
from graphite.model.Model2D import Model2D
from graphite.model.Model3D import Model3D
from graphite.model.Point2D import Point2D
from graphite.model.Point3D import Point3D
from graphite.model.Expression2D import Expression2D
from graphite.model.Expression3D import Expression3D
from graphite.model.Expression2DModel import Expression2DModel
from graphite.model.Expression3DModel import Expression3DModel
from graphite.inputhandler.InputHandler import InputHandler
from graphite.controller.Controller import Controller
from sympy import *
session = None
class Graphite(QtGui.QMainWindow):

	def __init__(self, *args):
		super(Graphite, self).__init__()
		self.session = Session(self)
		self.initUI()

	def initUI(self):
		self.setWindowTitle('Graphite - The Graph Plotter')				 	# Window Title
		self.setWindowIcon(QtGui.QIcon('resources/graphite-icon .png')) 					# App Icon
		self.initMenuBar()
		self.initToolBar()
		self.initStatusBar()
		self.initView()
		#self.showMaximized()

	def initView(self):
		self.tabs = QtGui.QTabWidget(self)
		self.tabs.setTabsClosable(True)
		self.tabs.tabCloseRequested.connect(self.close_tab)
		self.new_tab()
		self.setCentralWidget(self.tabs)
		self.tabs.setCornerWidget(self.addTabButton())

	def addTabButton(self):
		addtabbtn = QtGui.QPushButton("+",self.tabs)
		addtabbtn.setObjectName("addButton")
		self.connect(addtabbtn, QtCore.SIGNAL("clicked()"), self.new_tab)
		return addtabbtn

	def initToolBar(self):
		pass

	def initStatusBar(self):
		statusbar = self.statusBar()
		statusbar.message("Ready....")

	def new_tab(self):
		self.session.add(self.tabs)

	def close_tab(self, index):
		self.session.close_tab(self.tabs, index)

	def save_tab(self):
		filename = QtGui.QFileDialog.getSaveFileName(self, "Save Current Tab", "")
		index=int(self.tabs.currentIndex())
		self.session.save_tab(index,filename)

	def new_session(self):
		#self.session.close()
		#del self.session
		self.tabs.close()
		self.session = Session(self)

	def openSession(self):
		modellist = self.session.open()
		self.new_session()
		self.session.makeSession(modellist,self.tabs)

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

		tab_save_action = QtGui.QAction('Save Current Tab', self)
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
		# clear_action.setShortcut('Ctrl+Shift+Q') 
		clear_action.setStatusTip('Clear current plot')
		#clearaction.triggered.connect('''implement the function to create new plot''')
		edit_menu.addAction(clear_action)		

		# project menu actions
		session_open_action = QtGui.QAction('Open Session..', self)
		session_open_action.setShortcut('Ctrl+Shift+O')
		session_open_action.setStatusTip('Open New Session')
		session_open_action.triggered.connect(self.openSession)
		session_menu.addAction(session_open_action)

		session_recent_action = QtGui.QAction('Open Recent', self)
		session_recent_action.setShortcut('Ctrl+Shift+R')
		session_recent_action.setStatusTip('Open Recent Session')
		#session_recent_action.connect('''implement the function to create new plot''')
		session_menu.addAction(session_recent_action)

		session_save_action = QtGui.QAction('Save Session As..', self)
		session_save_action.setShortcut('Ctrl+Shift+S')
		session_save_action.setStatusTip('Save Current Session')
		session_save_action.triggered.connect(self.session.save)
		session_menu.addAction(session_save_action)

		session_close_action = QtGui.QAction('Close Session', self)
		session_close_action.setShortcut('Ctrl+Shift+Q')
		session_close_action.setStatusTip('Close Current Session')
		session_close_action.triggered.connect(self.session.close)
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
		# doc_action.triggered.connect('''implement the function to create doc_action''')
		help_menu.addAction(doc_action)

		about_action = QtGui.QAction('About', self)
		about_action.setShortcut('') 
		about_action.setStatusTip('About Software and Licenses')
		about_action.triggered.connect(self.about)
		help_menu.addAction(about_action)
		
		return

	def about(self):
		self.aboutPopup = AboutPopUp(self)
		self.aboutPopup.exec_()


	@staticmethod
	def main(args):
		sys.stdout = open('message.dump', 'w')
		sys.stderr = open('error.dump', 'w')
		app = QtGui.QApplication(args)
		plotterview = Graphite()
		global session
		session = plotterview.session
		unittest.main()
		sys.exit(app.exec_())


class TestModel(unittest.TestCase):
	def setUp(self):
		self.model = Model()

	def test_model_getPlottable(self):
		with self.assertRaises(NotImplementedError):
			self.model.getPlottable('domain', '2D')	#blah domain

	def test_model_eval(self):
		with self.assertRaises(NotImplementedError):
			self.model.eval('domain')	#blah domain

class TestPoint2D(unittest.TestCase):
	def setUp(self):
		self.point2d = Point2D(0, 0)

	def test_getX_getY(self):
		self.assertEqual(self.point2d.getX(), 0)
		self.assertEqual(self.point2d.getY(), 0)

class TestController(unittest.TestCase):
	def setUp(self):
		self.inputhandler = session.inputhandler
		self.controller = Controller(self.inputhandler)
		self.aggregator = self.controller.aggregator
		self.viewport = self.controller.viewport
		self.expr2D = Expression2D('x**3 + x')
		self.expr3D = Expression3D('x*y + x + y')
		self.model2D = Expression2DModel(self.expr2D)
		self.model3D = Expression3DModel(self.expr3D)

	def test_addModelToAggregator(self):
		self.aggregator.addModel(self.model2D)
		self.assertEqual(self.aggregator.models[-1].expression, self.expr2D.expr)

class TestAggregator(unittest.TestCase):
	def setUp(self):
		self.inputhandler = session.inputhandler
		self.controller = Controller(self.inputhandler)
		self.aggregator = self.controller.aggregator
		self.viewport = self.controller.viewport
		self.expr2D = Expression2D('x**3 + x')
		self.expr3D = Expression3D('x*y + x + y')
		self.model2D = Expression2DModel(self.expr2D)
		self.model3D = Expression3DModel(self.expr3D)

	def test_generateImage(self):
		self.assertEqual(latex(self.expr2D.expr), self.model2D.getRenderedView())
		self.assertEqual(latex(self.expr3D.expr), self.model3D.getRenderedView())

if __name__ == '__main__':
	Graphite.main(sys.argv)	