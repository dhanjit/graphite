
from Point  import Point2D , Point3D
import sys
from PyQt4 import QtGui, QtCore
from PyQt4.QtCore import *
from PyQt4.QtGui import *


class Example(QtGui.QWidget):
    
    def __init__(self,parent = None ):
        super(Example, self).__init__(parent)      

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
         

class Widget(QtGui.QWidget):

    def __init__(self):
        super(Widget, self).__init__()

        self.layout = QtGui.QHBoxLayout(self)

        self.label = QtGui.QLabel("Label")
        self.line = QtGui.QLineEdit()

        self.layout.addWidget(self.label)
        self.layout.addWidget(self.line)        

        # have this widget (self) watch events for these    
        self.label.installEventFilter(self)
        self.line.installEventFilter(self)
        self.show()

    def mousePressEvent(self, event):
        print "Main Widget Mouse Press"
        super(Widget, self).mousePressEvent(event)

    def eventFilter(self, obj, event):
        # you could be doing different groups of actions
        # for different types of widgets and either filtering
        # the event or not.
        # Here we just check if its one of the layout widgets
        if self.layout.indexOf(obj) != -1:
            if event.type() == event.MouseButtonPress:
                print "Widget click", obj
                self.popup = Example(self)
                self.popup.set_position(self.line)
                self.popup.show()
                # if I returned True right here, the event
                # would be filtered and not reach the obj,
                # meaning that I decided to handle it myself

        # regardless, just do the default
        return super(Widget, self).eventFilter(obj, event)
def main():
    app = QtGui.QApplication(sys.argv)
    table45 = Widget()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
"""


import sys, random
from PyQt4 import QtGui, QtCore

# Robot Widget
class RobotLink(QtGui.QWidget):
    def __init__(self, parent, x, y, width, height, fill):
        super(RobotLink, self).__init__(parent)
        self._fill     = fill
        self._rotation = 0
        self.setGeometry(x, y, width, height)

    def paintEvent(self, e):
        painter = QtGui.QPainter()
        painter.begin(self)
        self.drawLink(painter)
        painter.end()

    def drawLink(self, painter):
        painter.setPen(QtGui.QColor(0, 0, 0))
        painter.setBrush(self._fill)
        painter.drawEllipse(0, 0, self.width(), self.height())

# Window
class Window(QtGui.QWidget):
    # Default Constructor, sets up the window GUI
    def __init__(self):
        super(Window, self).__init__()
        self.initUI()

    def initUI(self):
        self._link1 = RobotLink(self, 10, 10, 100, 50, QtCore.Qt.DiagCrossPattern)
        self._link2 = RobotLink(self, 100, 100, 50, 100, QtCore.Qt.Dense5Pattern)
        self._link3 = RobotLink(self, 150, 150, 50, 50, QtCore.Qt.Dense2Pattern)

        self.setGeometry(300, 300, 800, 600)
        self.setWindowTitle("CSCE 452 - PaintBot")

    def paintEvent(self, e):
        super(Window, self).paintEvent(e)
        painter = QtGui.QPainter()
        painter.begin(self)
        self.drawBoundingBoxes(painter)
        painter.end()

    # Draws the boxes that define the robots workspace and
    # the control panel
    def drawBoundingBoxes(self, painter):
        color = QtGui.QColor(0, 0, 0)
        color.setNamedColor("#cccccc")
        painter.setPen(color)

        # Draw the robot workspace
        painter.setBrush(QtGui.QColor(255, 255, 255))
        painter.drawRect(10, 10, 500, 578)

        # Draw the control panel workspace
        painter.setBrush(QtGui.QColor(150, 150, 150))
        painter.drawRect(520, 10, 270, 578)

        # Draws the slider 'base'
        painter.setPen(QtGui.QColor(0, 0, 0))
        painter.drawLine(100, 570, 400, 570)

    def changeValue(self, value):
        self.wid.emit(QtCore.SIGNAL("updateRobot(int)"), value)
        self.wid.repaint()

# Setup the Window, and the Robot
app = QtGui.QApplication(sys.argv)
win = Window()
win.show()
app.exec_()
"""