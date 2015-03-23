from PyQt4 import QtGui

class Tab(QtGui.QWidget):
	def __init__(self, aggregator, input, viewport,global_setting):
		super(Tab,self).__init__()
		self.initUI(aggregator, input, viewport,global_setting)

	def initUI(self, aggregator, input, viewport,global_setting):
		# hbox_layout = QtGui.QHBoxLayout()
		# hbox_layout.addWidget(input)
		# hbox_layout.addWidget(aggregator)
		# hbox_layout.addWidget(viewport)
		# hbox_layout.addStretch()
		# self.setLayout(hbox_layout)
		grid_layout = QtGui.QGridLayout()
		grid_layout.addWidget(input,0,0,2,2)
		grid_layout.addWidget(aggregator,0,2,4,2)
		grid_layout.addWidget(viewport,0,4,4,8)
		grid_layout.addWidget(global_setting,2,0,2,2)
		self.setLayout(grid_layout)