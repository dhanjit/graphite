from PyQt4 import QtGui

class Tab(QtGui.QWidget):
	def __init__(self, aggregator, input, viewport):
		super(Tab,self).__init__()
		self.initUI(aggregator, input, viewport)

	def initUI(self, aggregator, input, viewport):
		hbox_layout = QtGui.QHBoxLayout()
		hbox_layout.addWidget(input)
		hbox_layout.addWidget(aggregator)
		hbox_layout.addWidget(viewport)
		hbox_layout.addStretch()
		self.setLayout(hbox_layout)