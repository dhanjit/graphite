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
		#self.close()
		return self.load(filename)

	def load(self, filename):
		if os.path.exists(filename):
			print("session loading: ", filename)
			with open(filename, 'rb') as input:
				modellist = pickle.load(input)
			return modellist
			#print("session loaded.", filename)

	def save(self):
		filename = str(QtGui.QFileDialog.getSaveFileName(self.window, "Save Session", ""))
		if os.access(os.path.dirname(filename), os.W_OK):
			print("session saving: ", filename)
			with open(filename, 'wb') as output:
				modellist = [ controller.aggregator.models for controller in self.controllers ]
				pickle.dump(modellist, output)
			print("session saved.", filename)
		return

	def add(self, tabs):
		controller = Controller(self.inputhandler)
		self.controllers.append(controller)
		index = tabs.addTab(controller.tab, "Unsaved..")
		tabs.setCurrentIndex(index)


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

	def makeSession(self, modellist, tabs):
		for models in modellist:
			controller = Controller(self.inputhandler)
			controller.aggregator.models = models
			self.controllers.append(controller)
			tabs.addTab(controller.tab, "        ")
