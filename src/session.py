from PyQt4 import QtGui

class Session:

	def __init__(self, canvas):
		self.aggregators = []
		self.canvas = canvas

	def load(self, sessionfile):
		pass

	def save(self, sessionfile):
		pass

	def close(self):
		pass


	def add_tab(self):
		self.aggregators.append(Aggregator())
