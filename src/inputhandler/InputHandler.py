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
		trigonometric = ["sin(x)", "cos(x)", "tan(x)", "cosec(x)", "sec(x)", "cot(x)", "sin(y)", "cos(y)", "tan(y)", "cosec(y)", "sec(y)", "cot(y)"]
		exponential = ["exp(x)", "log(x)", "ln(x)", "exp(y)", "log(y)", "ln(y)"]
		power = ["x^2", "x^3", "x^4", "x^5", "x^6", "y^2", "y^3", "y^4", "y^5", "y^6"]
		stringlistmodel.setStringList(trigonometric + exponential + power)
		self.completer.setModel(stringlistmodel)

	def initCompleter(self):
		pass
