from PyQt4.QtGui import QCompleter, QStringListModel
from PyQt4.QtCore import QString
import re

class AutoCompleter(QCompleter):
	def __init__(self, parent=None):
		super(AutoCompleter, self).__init__(parent)
		self.stringlist = self.initStringList()
		self.completions = {}
		self.setModel(QStringListModel())
		self.update()

	def initStringList(self):
		trigonometric = ["sin(x)", "cos(x)", "tan(x)", "cosec(x)", "sec(x)", "cot(x)", "sin(y)", "cos(y)", "tan(y)",
						 "cosec(y)", "sec(y)", "cot(y)"]
		exponential = ["exp(x)", "log(x)", "ln(x)", "exp(y)", "log(y)", "ln(y)"]
		power = ["x^2", "x^3", "x^4", "x^5", "x^6", "y^2", "y^3", "y^4", "y^5", "y^6"]
		return trigonometric + exponential + power

	def setCompletionPrefix(self, val):
		super(AutoCompleter, self).setCompletionPrefix(val)
		self.update()

	def currentCompletion(self):
		state = self.currentRow()
		return self._completionAt(state)

	def completionCount(self):
		state = 0
		while True:
			result = self._completionAt(state)
			if not result:
				break
			state += 1
		return state

	def update(self):
		matches = [self._completionAt(i) for i in xrange(self.completionCount())]
		self.model().setStringList(matches)

	def _completionAt(self, state):
		text = str(self.completionPrefix())

		# regex to split on any whitespace, or the char set +*/^()-
		match = re.match(r'^(.*)([\s+*/-]+)(.*)$', text)
		if match:
			prefix, sep, text = match.groups()

		result = self._completer(str(text), state)

		if result and match:
			result = sep.join([prefix, result])

		return '' if result is None else result

	def _completer(self,text,state):
		try:
			matches = self.completions[text]
		except KeyError:
			matches = [value for value in self.stringlist if text.upper() in value.upper()]
			self.completions[text] = matches
		try:
			return matches[state]
		except IndexError:
			return None

