from src.inputhandler.filehandler.FileFormatHandler import *
from src.inputhandler.parser.Parser import *
from PyQt4.QtGui import QStringListModel, QCompleter

class InputHandler:
	def __init__(self):
		self.parser = Parser()
		self.fileformathandler = FileFormatHandler()
		self.completer = QCompleter()
		self.initStringListModel()
		self.initCompleter()

	def initStringListModel(self):
		stringlistmodel = QStringListModel()
		stringlistmodel.setStringList(["sin(x)", "cos(x)", "log(x)"])
		self.completer.setModel(stringlistmodel)

	def initCompleter(self):
		pass
