from PyQt4 import QtGui, Qt

class Tab(QtGui.QWidget):
	def __init__(self, aggregator, input, viewport,global_setting):
		super(Tab,self).__init__()
		self.initUI(aggregator, input, viewport,global_setting)
		p = aggregator.palette()
		clr = self.palette().color(self.backgroundRole())
		p.setColor(aggregator.backgroundRole(),QtGui.QColor(247,247,247))
		print '*****************************************************'
		print '*****************************************************'
		print '*****************************************************'
		print '*****************************************************'
		print '*****************************************************'
		print '*****************************************************'
		print '*****************************************************'
		print QtGui.QColor(clr)
		aggregator.setPalette(p)

	def initUI(self, aggregator, input, viewport,global_setting):
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
		grid_layout.addWidget(global_setting,2,0,1,2)
		self.setLayout(grid_layout)