import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *


class Customize(QWidget):

    def __init__(self):
        super(Customize,self).__init__()
        self.color=QColor("red")
        self.width=1
        self.axis="x"
        self.draw_g = "default"
        self.line_g  = "full"
        self.fill_g = "-"
        self.setUi()
        self.show()

    def setUi(self):
        self.setWindowTitle("Settings")
        self.colorlbl = QLabel("Colour")
        self.colourbtn = QPushButton()
        self.colourbtn.setStyleSheet("background-color : red")
        self.widthlbl = QLabel("Line Width")
        self.widthbtn = QSpinBox()
        self.axislbl = QLabel("Axis")
        self.axisbtn = QComboBox()
        self.axisbtn.addItem("x")
        self.axisbtn.addItem("y")
        self.axisbtn.addItem("z")
        self.drawstylelbl = QLabel("Draw Style")
        self.drawstylebtn = QComboBox()
        self.drawstylebtn.addItem("default")
        self.drawstylebtn.addItem("steps")
        self.drawstylebtn.addItem("steps-pre")
        self.drawstylebtn.addItem("steps-mid")
        self.drawstylebtn.addItem("steps-post")
        self.linestylelbl = QLabel("Line Style")
        self.linestylebtn = QComboBox()
        self.linestylebtn.addItem("-")
        self.linestylebtn.addItem("--")
        self.linestylebtn.addItem("-.")
        self.linestylebtn.addItem(":")
        self.linestylebtn.addItem("None")
        self.fillstylelbl = QLabel("Fill Style")
        self.fillstylebtn = QComboBox()
        self.fillstylebtn.addItem("full")
        self.fillstylebtn.addItem("left")
        self.fillstylebtn.addItem("right")
        self.fillstylebtn.addItem("bottom")
        self.fillstylebtn.addItem("top")
        self.fillstylebtn.addItem("none")

        grid = QGridLayout()
        grid.addWidget(self.colorlbl,0,0)
        grid.addWidget(self.colourbtn,0,1)
        grid.addWidget(self.widthlbl,1,0)
        grid.addWidget(self.widthbtn,1,1)
        grid.addWidget(self.axislbl,2,0)
        grid.addWidget(self.axisbtn,2,1)
        grid.addWidget(self.drawstylelbl,3,0)
        grid.addWidget(self.drawstylebtn,3,1)
        grid.addWidget(self.fillstylelbl,4,0)
        grid.addWidget(self.fillstylebtn,4,1)
        grid.addWidget(self.linestylelbl,5,0)
        grid.addWidget(self.linestylebtn,5,1)
        self.setLayout(grid)

        self.connect(self.colourbtn,SIGNAL("clicked()"),self.setColor)
        self.connect(self.widthbtn,SIGNAL("valueChanged(int)"),self.setWidth)
        self.connect(self.axisbtn,SIGNAL("currentIndexChanged(int)"),self.setCombo)
        self.connect(self.drawstylebtn,SIGNAL("currentIndexChanged(int)"),self.setCombo)
        self.connect(self.linestylebtn,SIGNAL("currentIndexChanged(int)"),self.setCombo)
        self.connect(self.fillstylebtn,SIGNAL("currentIndexChanged(int)"),self.setCombo)

    def setColor(self):
        colordialog = QColorDialog.getColor()
        if colordialog.isValid():
            btn = self.sender()
            btn.setStyleSheet("background-color:"+colordialog.name())
            self.color = QColor(colordialog.name())

    def setWidth(self):
        self.width = self.widthbtn.value()

    def setCombo(self):
        if(self.sender()==self.axis):
            self.axis = self.axisbtn.currentText()
        elif(self.sender()==self.drawstylebtn):
            self.draw = self.drawstylebtn.currentText()
        elif(self.sender()==self.linestylebtn):
            self.line_g = self.linestylebtn.currentText()
        elif(self.sender()==self.fillstylebtn):
            self.fill_g = self.fillstylebtn.currentText()







app = QApplication(sys.argv)
setting = Customize();
app.exec_()