import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *
#import dialog

class Calculator(QWidget):

	def __init__(self, display):
		super(Calculator,self).__init__()
		self.display = display
		self.initUI()

	def initUI(self):

		self.setStyleSheet("background-color: white")

		self.lineedit = QLineEdit()
		self.lineedit.setStyleSheet("color: blue; font: bold")

		self.hbox_xyz = QHBoxLayout()
		self.x = QPushButton("x")
		self.y = QPushButton("y")
		self.z = QPushButton("z")
		self.hbox_xyz.addWidget(self.x)
		self.hbox_xyz.addWidget(self.y)
		self.hbox_xyz.addWidget(self.z)
		self.x.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.y.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.z.setStyleSheet("color: blue; background-color: yellow; font: bold")

		self.grid = QGridLayout()
		self.n1 = QPushButton("1")
		self.n2 = QPushButton("2")
		self.n3 = QPushButton("3")
		self.n4 = QPushButton("4")
		self.n5 = QPushButton("5")
		self.n6 = QPushButton("6")
		self.n7 = QPushButton("7")
		self.n8 = QPushButton("8")
		self.n9 = QPushButton("9")
		self.n0 = QPushButton("0")
		self.e = QPushButton("e")
		self.back = QPushButton("DEL")
		self.greater = QPushButton("<")
		self.less = QPushButton(">")
		self.point = QPushButton(".")
		self.equal = QPushButton("=")
		self.left_p = QPushButton("(")
		self.right_p = QPushButton(")")
		self.add = QPushButton("+")
		self.subtract = QPushButton("-")
		self.mult = QPushButton("*")
		self.divide = QPushButton("/")
		self.power = QPushButton("^")
		self.unknown = QPushButton("?")
		self.grid.addWidget(self.n1,0,0)
		self.grid.addWidget(self.n2,0,1)
		self.grid.addWidget(self.n3,0,2)
		self.grid.addWidget(self.n4,0,3)
		self.grid.addWidget(self.n5,1,0)
		self.grid.addWidget(self.n6,1,1)
		self.grid.addWidget(self.n7,1,2)
		self.grid.addWidget(self.n8,1,3)
		self.grid.addWidget(self.n9,2,0)
		self.grid.addWidget(self.n0,2,1)
		self.grid.addWidget(self.e,2,2)
		self.grid.addWidget(self.back,2,3)
		self.grid.addWidget(self.greater,3,0)
		self.grid.addWidget(self.less,3,1)
		self.grid.addWidget(self.point,3,2)
		self.grid.addWidget(self.equal,3,3)
		self.grid.addWidget(self.left_p,4,0)
		self.grid.addWidget(self.right_p,4,1)
		self.grid.addWidget(self.add,4,2)
		self.grid.addWidget(self.subtract,4,3)
		self.grid.addWidget(self.mult,5,0)
		self.grid.addWidget(self.divide,5,1)
		self.grid.addWidget(self.power,5,2)
		self.grid.addWidget(self.unknown,5,3)

		self.grid_func = QGridLayout()
		self.trlbl = QLabel("Trigonometry")
		self.trbtn = QComboBox()
		self.trbtn.addItem("sin(x)")
		self.trbtn.addItem("cos(x)")
		self.trbtn.addItem("tan(x)")
		self.trbtn.addItem("cosec(x)")
		self.trbtn.addItem("sec(x)")
		self.trbtn.addItem("tan(x)")
		self.loglbl = QLabel("Logarithmic")
		self.logbtn = QComboBox()
		self.logbtn.addItem("log2(x)")
		self.logbtn.addItem("ln(x)")
		self.logbtn.addItem("log10(x)")
		self.logbtn.addItem("logb(x)")
		self.explbl = QLabel("Exponential")
		self.expbtn = QComboBox()
		self.expbtn.addItem("exp(x)")
		self.expbtn.addItem("sqrt(x)")
		self.expbtn.addItem("x^y")
		self.expbtn.addItem("x^2")
		self.expbtn.addItem("x^3")
		self.expbtn.addItem("cuberoot(x)")
		self.expbtn.addItem("n root(x)")
		self.callbl = QLabel("Calculus")
		self.calbtn = QComboBox()
		self.calbtn.addItem("derivation w.r.t.(x)")
		self.calbtn.addItem("integration w.r.t.(x)")
		self.linearlbl = QLabel("Linear Algebra")
		self.linearbtn = QComboBox()
		self.linearbtn.addItem("m*x+c")
		self.grid_func.addWidget(self.trlbl,0,0)
		self.grid_func.addWidget(self.trbtn,0,1)
		self.grid_func.addWidget(self.explbl,1,0)
		self.grid_func.addWidget(self.expbtn,1,1)
		self.grid_func.addWidget(self.loglbl,2,0)
		self.grid_func.addWidget(self.logbtn,2,1)
		self.grid_func.addWidget(self.linearlbl,3,0)
		self.grid_func.addWidget(self.linearbtn,3,1)
		self.grid_func.addWidget(self.callbl,4,0)
		self.grid_func.addWidget(self.calbtn,4,1)

		self.hbox_select = QHBoxLayout()
		self.openbtn = QPushButton("OPEN")
		self.plotbtn = QPushButton("PLOT")
		self.clrbtn = QPushButton("CLEAR")
		self.hbox_select.addWidget(self.openbtn)
		self.hbox_select.addWidget(self.plotbtn)
		self.hbox_select.addWidget(self.clrbtn)

		self.main_layout = QVBoxLayout()
		self.main_layout.addWidget(self.lineedit)
		self.main_layout.addLayout(self.hbox_xyz)
		self.main_layout.addLayout(self.grid)
		self.main_layout.addLayout(self.grid_func)
		self.main_layout.addLayout(self.hbox_select)
		
		self.setLayout(self.main_layout)

		self.n1.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n2.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n3.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n4.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n5.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n6.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n7.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n8.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n9.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.n0.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.e.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.back.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.greater.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.less.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.point.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.equal.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.left_p.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.right_p.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.add.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.subtract.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.mult.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.divide.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.power.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.unknown.setStyleSheet("color: blue; background-color: yellow; font: bold")

		self.trlbl.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.trbtn.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.expbtn.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.explbl.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.logbtn.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.loglbl.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.callbl.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.calbtn.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.linearbtn.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.linearlbl.setStyleSheet("color: blue; background-color: yellow; font: bold")

		self.plotbtn.setStyleSheet("color: blue; background-color: yellow; font: bold")
		self.clrbtn.setStyleSheet("color: blue; background-color: yellow; font: bold")


		self.connect(self.trbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.logbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.expbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.calbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.linearbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.clrbtn, SIGNAL("clicked()"), self.lineedit.clear)
		self.connect(self.back, SIGNAL("clicked()"), self.lineedit.backspace)
		self.connect(self.x, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.y, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.z, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n1, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n2, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n3, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n4, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n5, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n6, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n7, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n8, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n9, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.n0, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.left_p, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.right_p, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.less, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.greater, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.point, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.equal, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.add, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.subtract, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.divide, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.mult, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.power, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.e, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.plotbtn,SIGNAL("clicked()"), self.plot_btn_handler)
		self.connect(self.openbtn,SIGNAL("clicked()"), self.open_btn_handler)

	def open_btn_handler(self):
		plot_data_file = QFileDialog.getOpenFileName(self, "Open Plot Data File", "")
		self.display.insert_data_model(plot_data_file)

	def plot_btn_handler(self):
		function = self.lineedit.text()
		function.replace("^","**")
		self.display.insert_function_model(function)

	def comboEvent(self,text):
		# if(self.sender()==self.linearbtn):
		#     try:
		#         dialogbox=dialog.Dialog()
		#         temp=dialogbox.showDialog("Enter values(a,b)",2).split(",")
		#     except:
		#         return
		# elif(text=="logb(x)"):
		#     try:
		#         dialogbox=dialog.Dialog()
		#         temp=dialogbox.showDialog("Enter value of b",1).strip("\n")
		#     except:
		#         return
		curr = self.lineedit.text()+text
		self.lineedit.setText(curr)

	def buttonEvent(self):
		self.lineedit.insert(self.sender().text())
