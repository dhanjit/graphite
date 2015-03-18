from PyQt4 import QtGui
from src.aggregator import Aggregator
import pickle
import os

class Session:

	def __init__(self, window):
		self.window = window
		self.aggregators = []
		self.add_tab()

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

	def close(self):
		pass


	def add_tab(self):
		self.aggregators.append(Aggregator(self.window))

	def close_tab(self):
		self.aggregators.append(Aggregator(self.window))
