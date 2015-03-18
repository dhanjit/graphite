from PyQt4 import QtGui
import pickle
import os
from src import Display

class Session(object):

	def __init__(self, window):
		self.window = window
		self.displays = []
	
	def load(self, filename):
		if os.path.exists(filename):
			print("session loading: ", filename)
			with open(filename, 'rb') as input:
				self = pickle.load(input)
			print("session loaded.", filename)

	def save(self, filename):
		if os.access(os.path.dirname(filename), os.W_OK):
			print("session saving: ", filename)
			with open(filename, 'wb') as output:
				pickle.dump(self, output, pickle.HIGHEST_PROTOCOL)
			print("session saved.", filename)
		return

	def add(self, tabs):
		display = Display()
		self.displays.append(display)
		tabs.addTab(display, "Unsaved..")

	def close(self):
		pass

	def close_tab(self, tabs, index):
		#self.displays.
		tabs.removeTab(index)
