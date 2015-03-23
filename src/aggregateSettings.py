import sys
from numpy import arange
from PyQt4.QtGui import *
from PyQt4.QtCore import *


class Customize(QWidget):

    def __init__(self,global_setting):
        super(Customize,self).__init__()

		self.global_settings = global_setting
		self.defaultSettings()
		self.initUI()
        # self.show()



    def initUI(self):

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
        self.defaultbtn = QPushButton("Default Settings")
        self.xrangelbl=QLabel("X Range")
        self.xmin = QLineEdit()
		self.xmin.setPlaceholderText("X MIN")
		self.xmin.setStyleSheet("color: black; ")
		self.xmax = QLineEdit()
		self.xmax.setPlaceholderText("X MAX")
		self.xmax.setStyleSheet("color: black; ")
		self.yrangelbl=QLabel("Y Range")
		self.ymin = QLineEdit()
		self.ymin.setPlaceholderText("Y MIN")
		self.ymin.setStyleSheet("color: black; ")
		self.ymax = QLineEdit()
		self.ymax.setPlaceholderText("Y MAX")
		self.ymax.setStyleSheet("color: black; ")
		self.zrangelbl=QLabel("Z Range")
		self.zmin = QLineEdit()
		self.zmin.setPlaceholderText("Z MIN")
		self.zmin.setStyleSheet("color: black; ")
		self.zmax = QLineEdit()
		self.zmax.setPlaceholderText("Z MAX")
		# self.zmax.setStyleSheet("color: black; ")

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
		self.connect(self.axisbtn,SIGNAL("activated(QString)"),self.setCombo)
		self.connect(self.gridset,SIGNAL(" stateChanged(int)"),self.setCheck)
		self.connect(self.autolayoutbox,SIGNAL(" stateChanged(int)"),self.setCheck)
		self.connect(self.xscalebtn,SIGNAL("activated(QString)"),self.setCombo)
		self.connect(self.yscalebtn,SIGNAL("activated(QString)"),self.setCombo)
		self.connect(self.zscalebtn,SIGNAL("activated(QString)"),self.setCombo)
		self.connect(self.applybtn,SIGNAL("clicked()"),self.applySettings)
		self.connect(self.defaultbtn,SIGNAL("clicked()"),self.defaultSettings)

    def setColor(self):
        colordialog = QColorDialog.getColor()
        if colordialog.isValid():
            btn = self.sender()
            btn.setStyleSheet("background-color:"+colordialog.name())
            self.settings["facecolour"] = QColor(colordialog.name())

    def setCombo(self,text):
        sender = self.sender()
        if(sender==self.axisbtn):
            self.settings["axis"] = str(text)
        elif(sender==self.xscalebtn):
            self.settings["xscaletype"] = str(text)
        elif(sender==self.yscalebtn):
            self.settings["yscaletype"] = str(text)
        else:
            self.settings["zscaletype"] = str(text)


    def setCheck(self,state):
        if(state==Qt.Checked):
            curr_state = True
        else:
            curr_state = False
        if(self.sender()==self.gridset):
            self.settings["grid"] = curr_state
        else:
            self.settings["autolayout"] = curr_state
            


    def applySettings(self):
        self.global_settings["axis"] = self.axis
        try:
            min_x = float(str(self.xmin.text()))
            max_x = float(str(self.xmax.text()))
            self.global_settings["xrange"] = arange(min_x,max_x)
        except ValueError:
            self.global_settings["xrange"] = self.settings["range_x"]
        try:
            min_y = float(str(self.ymin.text()))
            max_y = float(str(self.ymax.text()))
            self.global_settings["yrange"] = arange(min_y,max_y)
        except ValueError:
            self.global_settings["yrange"] = self.settings["range_y"]
        try:
            min_z = float(str(self.zmin.text()))
            max_z = float(str(self.zmax.text()))
            self.global_settings["zrange"] = arange(min_z,max_z)
        except ValueError:
            self.global_settings["zrange"] = self.settings["range_z"]
        self.global_settings["facecolour"] = self.settings["facecolour"]
        self.global_settings["grid"] = self.settings["grid"]
        self.global_settings["autolayout"] = self.settings["autolayout"]
        self.global_settings["xscale"] = self.settings["xscaletype"]
        self.global_settings["yscale"] = self.settings["yscaletype"]
        self.global_settings["zscale"] = self.settings["zscaletype"]


    def defaultSettings(self):
        self.settings["axis"] = "x"
        self.settings["range_x"] = arange(-3.0,3.0,0.2)
        self.settings["range_y"] = arange(-3.0,3.0,0.2)
        self.settings["range_z"] = arange(-0.0,0.0,0.1)
        self.settings["facecolour"] = QColor("red").name()
        self.settings["grid"] = False
        self.settings["xscaletype"] = "linear"
        self.settings["yscaletype"] = "linear"
        self.settings["zscaletype"] = "linear"
        self.settings["autolayout"] = False
        self.applySettings()