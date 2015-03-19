import sys
from numpy import arange
from PyQt4.QtGui import *
from PyQt4.QtCore import *


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
        self.xscalelbl = QLabel("X Scale")
        self.yscalelbl = QLabel("Y Scale")
        self.zscalelbl = QLabel("Z Scale")
        self.xscalebtn = QComboBox()
        self.xscalebtn.addItem("Log")
        self.xscalebtn.addItem("Linear")
        self.yscalebtn = QComboBox()
        self.yscalebtn.addItem("Log")
        self.yscalebtn.addItem("Linear")
        self.zscalebtn = QComboBox()
        self.zscalebtn.addItem("Log")
        self.zscalebtn.addItem("Linear")
        self.exportbtn = QPushButton("Export")
        self.applybtn = QPushButton("Apply Settings")
        self.defaultbtn = QPushButton("Deafult Settings")
        self.xrangelbl=QLabel("X Range")
        self.xmin = QLineEdit("X MIN")
        self.xmax = QLineEdit("X MAX")
        self.yrangelbl=QLabel("Y Range")
        self.ymin = QLineEdit("Y MIN")
        self.ymax = QLineEdit("Y MAX")
        self.zrangelbl=QLabel("Z Range")
        self.zmin = QLineEdit("Z MIN")
        self.zmax = QLineEdit("Z MAX")

        grid = QGridLayout()
        grid.addWidget(self.axislbl,0,0)
        grid.addWidget(self.axisbtn,0,1)
        grid.addWidget(self.facecolourlbl,1,0)
        grid.addWidget(self.facecolourbtn,1,1)
        grid.addWidget(self.gridset,2,0)
        grid.addWidget(self.autolayoutbox,2,1)
        xhbox = QHBoxLayout()
        xhbox.addWidget(self.xrangelbl)
        xhbox.addWidget(self.xmin)
        xhbox.addWidget(self.xmax)
        yhbox = QHBoxLayout()
        yhbox.addWidget(self.yrangelbl)
        yhbox.addWidget(self.ymin)
        yhbox.addWidget(self.ymax)
        zhbox = QHBoxLayout()
        zhbox.addWidget(self.zrangelbl)
        zhbox.addWidget(self.zmin)
        zhbox.addWidget(self.zmax)
        scalegrid = QGridLayout()
        scalegrid.addWidget(self.xscalelbl,0,0)
        scalegrid.addWidget(self.xscalebtn,0,1)
        scalegrid.addWidget(self.yscalelbl,1,0)
        scalegrid.addWidget(self.yscalebtn,1,1)
        scalegrid.addWidget(self.zscalelbl,2,0)
        scalegrid.addWidget(self.zscalebtn,2,1)
        hboxpushbtn = QHBoxLayout()
        hboxpushbtn.addWidget(self.exportbtn)
        hboxpushbtn.addWidget(self.defaultbtn)
        hboxpushbtn.addWidget(self.applybtn)
        layout = QVBoxLayout()
        layout.addLayout(grid)
        layout.addLayout(xhbox)
        layout.addLayout(yhbox)
        layout.addLayout(zhbox)
        layout.addLayout(scalegrid)
        layout.addLayout(hboxpushbtn)
        self.setLayout(layout)

        self.connect(self.facecolourbtn,SIGNAL("clicked()"),self.setColor)
        self.connect(self.axisbtn,SIGNAL("valueChanged(int)"),self.setCombo)
        self.connect(self.gridset,SIGNAL(" stateChanged(int)"),self.setCheck)
        self.connect(self.autolayoutbox,SIGNAL(" stateChanged(int)"),self.setCheck)
        self.connect(self.xscalebtn,SIGNAL("valueChanged(int)"),self.setCombo)
        self.connect(self.yscalebtn,SIGNAL("valueChanged(int)"),self.setCombo)
        self.connect(self.zscalebtn,SIGNAL("valueChanged(int)"),self.setCombo)
        self.connect(self.applybtn,SIGNAL("clicked()"),self.applySettings)
        self.connect(self.defaultbtn,SIGNAL("clicked()"),self.defaultSettings)

    def setColor(self):
        colordialog = QColorDialog.getColor()
        if colordialog.isValid():
            btn = self.sender()
            btn.setStyleSheet("background-color:"+colordialog.name())
            self.facecolour = QColor(colordialog.name())

    def setCombo(self):
        sender = self.sender()
        if(sender==self.axisbtn):
            self.axis = str(self.sender().text())
        elif(sender==self.xscalebtn):
            self.xscaletype = str(self.sender().text())
        elif(sender==self.yscalebtn):
            self.xscaletype = str(self.sender().text())
        else:
            self.xscaletype = str(self.sender().text())


    def setCheck(self,state):
        if(state==Qt.Checked):
            curr_state = True
        else:
            curr_state = False
        if(self.sender()==self.gridset):
            self.grid = curr_state
        else:
            self.autolayout = curr_state
            


    def applySettings(self):
        settings={}
        settings["axis"] = self.axis
        try:
            min_x = float(str(self.xmin.text()))
            max_x = float(str(self.xmax.text()))
            settings["xrange"] = arange(min_x,max_x)
        except ValueError:
            settings["xrange"] = self.range_x
        try:
            min_y = float(str(self.ymin.text()))
            max_y = float(str(self.ymax.text()))
            settings["yrange"] = arange(min_y,max_y)
        except ValueError:
            settings["yrange"] = self.range_y
        try:
            min_z = float(str(self.zmin.text()))
            max_z = float(str(self.zmax.text()))
            settings["zrange"] = arange(min_z,max_z)
        except ValueError:
            settings["zrange"] = self.range_z
        settings["facecolour"] = self.facecolour
        settings["grid"] = self.grid
        settings["autolayout"] = self.autolayout
        settings["xscale"] = self.xscaletype
        settings["yscale"] = self.yscaletype
        settings["zscale"] = self.zscaletype

    def defaultSettings(self):
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
        self.applySettings()



app = QApplication(sys.argv)
setting = Customize()
app.exec_()


