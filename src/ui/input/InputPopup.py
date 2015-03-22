from PyQt4 import QtGui, QtCore
from PyQt4.QtCore import *
from PyQt4.QtGui import *

class InputPopup(QtGui.QWidget):
    
    def __init__(self,parent = None ):
        super(InputPopup, self).__init__(parent)

        layout = QGridLayout(self)
            
        # adjust the margins or you will get an invisible, unintended border
        layout.setContentsMargins(0, 0, 0, 0)

        # need to set the layout
        self.setLayout(layout)
        

        # tag this widget as a popup
        self.setWindowFlags(Qt.Popup)

        
        self.setGeometry(50, 100, 250, 150)

        # calculate the botoom right point from the parents rectangle
        self.setWindowTitle('Example')

    def set_position(self,widget = None):
        point = widget.rect().bottomRight()

        # map that point as a global position
        global_point = widget.mapToGlobal(point)
        # by default, a widget will be placed from its top-left corner, so
        # we need to move it to the left based on the widgets width
        self.move(global_point - QPoint(self.width(), 0))
        
    def changeTitle(self, state):
      
        if state == QtCore.Qt.Checked:
            self.setWindowTitle('QtGui.QCheckBox')
        else:
            self.setWindowTitle('')