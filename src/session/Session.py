import pickle
import os
from PyQt4 import QtGui
from src.inputhandler.InputHandler import InputHandler
from src.Controller import Controller

class Session(object):

	def __init__(self, window):
		self.window = window
		self.controllers = []
		self.inputhandler = InputHandler()
	
	def open(self):
		filename = QtGui.QFileDialog.getOpenFileName(None, "Open Session", "")
		self.close()
		self.load(filename)

	def load(self, filename):
		if os.path.exists(filename):
			print("session loading: ", filename)
			with open(filename, 'rb') as input:
				self = pickle.load(input)
			print("session loaded.", filename)

	def save(self):
		filename = QtGui.QFileDialog.getSaveFileName(None, "Save Session", "")
		if os.access(os.path.dirname(filename), os.W_OK):
			print("session saving: ", filename)
			with open(filename, 'wb') as output:
				pickle.dump(self, output, pickle.HIGHEST_PROTOCOL)
			print("session saved.", filename)
		return

	def add(self, tabs):
		controller = Controller(self.inputhandler)
		self.controllers.append(controller)
		tabs.addTab(controller.tab, "Unsaved..")

	def close(self):
		close_msg = "Save Session?"
		reply = QtGui.QMessageBox.question(None, 'Message', close_msg, QtGui.QMessageBox.Yes, QtGui.QMessageBox.No)
		if reply == QtGui.QMessageBox.Yes:
			self.save()				

	def close_tab(self, tabs, index):
		del self.controllers[index]
		tabs.removeTab(index)

	def save_tab(self, index, filename):
		self.controllers[index].viewport.canvas[self.controllers[index].aggregator.getCurrentType(default='3D')].saveFigure(filename)
