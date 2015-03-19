import sys
from numpy import arange
from PyQt4.QtGui import *
from PyQt4.QtCore import *
from PyQt4.QtGui import QPushButton, QComboBox, QPushButton, QHBoxLayout


class Customize(QWidget):

    def __init__(self):
        super(Customize,self).__init__()

        self.axis = "x"
        self.range_x = arange(-3.0,3.0,0.2)
        self.range_y = arange(-3.0,3.0,0.2)
        self.range_z = arange(-0.0,0.0,0.1)
        self.facecolour = QColor("red")
        self.grid = False
        self.xscaletype = "linear"
        self.yscaletype = "linear"
        self.zscaletype = "linear"
        self.autolayout = True

        self.setui()
        self.show()



    def setui(self):
        self.setWindowTitle("Settings")

        self.axislbl = QLabel("Choose axis")
        self.axisbtn = QComboBox()
        self.axisbtn.addItem("x")
        self.axisbtn.addItem("y")
        self.axisbtn.addItem("z")
        self.facecolourlbl = QLabel("Face Colour")
        self.facecolourbtn = QPushButton("Choose Colour")
        self.facecolourbtn.setStyleSheet("background-color:red")
        self.gridset = QCheckBox("Show Grid")
        self.autolayoutbox = QCheckBox("Apply AutoLayout")
        self.xscalecheck = QCheckBox("X Scale")
        self.yscalecheck = QCheckBox("Y Scale")
        self.zscalecheck = QCheckBox("Z Scale")
        self.logbtn = QRadioButton("Log Scale")
        self.linearbtn = QRadioButton("Linear Scale")
        self.linearbtn.setChecked(True)
        self.exportbtn = QPushButton("Export")
        self.applybtn = QPushButton("Apply Settings")
        self.defaultbtn = QPushButton("Deafult Settings")

        grid = QGridLayout()
        grid.addWidget(self.axislbl,0,0)
        grid.addWidget(self.axisbtn,0,1)
        grid.addWidget(self.facecolourlbl,1,0)
        grid.addWidget(self.facecolourbtn,1,1)
        grid.addWidget(self.gridset,2,0)
        grid.addWidget(self.autolayoutbox,2,1)
        lblvbox = QVBoxLayout()
        lblvbox.addWidget(self.xscalecheck)
        lblvbox.addWidget(self.yscalecheck)
        lblvbox.addWidget(self.zscalecheck)
        btnvbox = QVBoxLayout()
        btngroup  = QButtonGroup()
        btngroup.addButton(self.logbtn)
        btngroup.addButton(self.linearbtn)
        btnvbox.addWidget(self.logbtn)
        btnvbox.addWidget(self.linearbtn)
        hbox = QHBoxLayout()
        hbox.addLayout(lblvbox)
        hbox.addLayout(btnvbox)
        hbox.setMargin(10)
        hboxpushbtn = QHBoxLayout()
        hboxpushbtn.addWidget(self.exportbtn)
        hboxpushbtn.addWidget(self.defaultbtn)
        hboxpushbtn.addWidget(self.applybtn)
        layout = QVBoxLayout()
        layout.addLayout(grid)
        layout.addLayout(hbox)
        layout.addLayout(hboxpushbtn)
        self.setLayout(layout)

        self.connect(self.facecolourbtn,SIGNAL("clicked()"),self.setColor)
        self.connect(self.axisbtn,SIGNAL("currentIndexChanged(int)"),self.setCombo)
        self.connect(self.gridset,SIGNAL("stateChanged()"),self.setCheck)
        self.connect(self.gridset,SIGNAL("stateChanged()"),self.setCheck)

    def setColor(self):
        colordialog = QColorDialog.getColor()
        if colordialog.isValid():
            btn = self.sender()
            btn.setStyleSheet("background-color:"+colordialog.name())
            self.facecolour = QColor(colordialog.name())


    def setCombo(self):
        self.axis = self.axisbtn.currentText()

    def setCheck(self,state):
        if(self.sender()==self.gridset):
            if (state == Qt.Checked):
                self.grid = True
            else:
                self.grid = False
        else:
            if (state == Qt.Checked):
                self.autolayout = True
            else:
                self.autolayout = False


app = QApplication(sys.argv)
setting = Customize();
app.exec_()


