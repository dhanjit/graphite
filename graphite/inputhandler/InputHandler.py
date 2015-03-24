from graphite.inputhandler.filehandler.FileFormatHandler import *
from graphite.inputhandler.parser.Parser import *
from AutoCompleter import *#AutoCompleter
from PyQt4.QtGui import QStringListModel, QCompleter

class InputHandler:
	def __init__(self):
		self.parser = Parser()
		self.fileformathandler = FileFormatHandler()
		self.completer = AutoCompleter()


