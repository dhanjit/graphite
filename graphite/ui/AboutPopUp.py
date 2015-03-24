__author__ = 'batman'

from PyQt4 import QtGui,QtCore

class AboutPopUp(QtGui.QDialog):

	def __init__(self,parent):
		super(AboutPopUp, self).__init__()
		self.initUI()
		self.setWindowFlags(QtCore.Qt.Popup)
		self.setAttribute(QtCore.Qt.WA_QuitOnClose)
		point  = parent.rect().topRight()
		global_point = parent.mapToGlobal(point)
		self.move(global_point - QtCore.QPoint(self.width(),0))

	def initUI(self):
		self.titleLabel = QtGui.QLabel()
		pix = QtGui.QPixmap('resources/graphite-icon.png')
		self.titleLabel.setPixmap(pix.scaled(self.titleLabel.width(),self.titleLabel.height(),QtCore.Qt.KeepAspectRatio))
		self.nameLabel = QtGui.QLabel("graphite")
		self.nameLabel.setAlignment(QtCore.Qt.AlignCenter)
		# self.nameLabel.setFont(QtCore.Qt.WA_SetFont)
		self.licenceLabel = QtGui.QLabel("Licence : OpenSource")
		self.devLabel = QtGui.QLabel("Developed by: RK OpenSoft Team")
		self.layout = QtGui.QVBoxLayout(self)
		self.layout.addWidget(self.titleLabel)
		self.layout.addWidget(self.nameLabel)
		self.layout.addWidget(self.licenceLabel)
		self.layout.addWidget(self.devLabel)

