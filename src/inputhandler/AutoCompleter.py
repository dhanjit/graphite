from PyQt4.QtGui import QCompleter, QStringListModel
from PyQt4.QtCore import QString
import re

class AutoCompleter(QCompleter):
	def __init__(self, parent=None):
		super(AutoCompleter, self).__init__(parent)
		self.stringlist = self.initStringList()
		self.stringlistmodel = QStringListModel()
		self.initStringListModel(self.stringlist)
		self.initCompleter()

	def splitPath(self, qstring):
		prefix = str(qstring)
		prefix = str(super(AutoCompleter,self).completionPrefix())
		regexpattern = '|'.join(map(re.escape, ['+', '-', '/', '*']))
		suffix = re.split(regexpattern, prefix)[-1] if prefix else prefix
		prefix = prefix[:-len(suffix)]
		self.prefixifyStringListModel(prefix)
		return [QString(prefix)]

	def initStringList(self):
		trigonometric = ["sin(x)", "cos(x)", "tan(x)", "cosec(x)", "sec(x)", "cot(x)", "sin(y)", "cos(y)", "tan(y)",
		                 "cosec(y)", "sec(y)", "cot(y)"]
		exponential = ["exp(x)", "log(x)", "ln(x)", "exp(y)", "log(y)", "ln(y)"]
		power = ["x^2", "x^3", "x^4", "x^5", "x^6", "y^2", "y^3", "y^4", "y^5", "y^6"]
		return trigonometric + exponential + power

	def initStringListModel(self, stringlist):
		self.stringlistmodel.setStringList(stringlist)
		self.updateModel()

	def updateModel(self):
		self.setModel(self.stringlistmodel)

	def prefixifyStringListModel(self, prefix):
		stringlist = [ str(prefix+string) for string in self.stringlist ]
		self.setModel(QStringListModel(stringlist))

	def initCompleter(self):
		pass