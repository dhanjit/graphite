from PyQt4 import QtGui, Qt

class Tab(QtGui.QWidget):
	def __init__(self, aggregator, input, viewport):
		super(Tab,self).__init__()
		self.initUI(aggregator, input, viewport)

	def initUI(self, aggregator, input, viewport):
		# hbox_layout = QtGui.QHBoxLayout()
		# hbox_layout.addWidget(input)
		# hbox_layout.addWidget(aggregator)
		# hbox_layout.addWidget(viewport)
		# hbox_layout.addStretch()
		# self.setLayout(hbox_layout)
		grid_layout = QtGui.QGridLayout()
		grid_layout.addWidget(input,0,0,2,2)
		scrollarea = QtGui.QScrollArea()
		scrollarea.setWidgetResizable(True)
		scrollarea.setWidget(aggregator)
		#scrollarea.setVerticalScrollBarPolicy(Qt.ScrollBarAsNeeded)
		aggregator.setParent(scrollarea)

		grid_layout.addWidget(scrollarea,0,2,3,2)
		grid_layout.addWidget(viewport,0,4,3,8)
		self.setLayout(grid_layout)