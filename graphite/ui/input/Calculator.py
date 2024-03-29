import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *
import re


class CustomLineEdit(QLineEdit):
	def __init__(self, parent=None):
		super(CustomLineEdit, self).__init__(parent)

	# def setCompleter(self,completer):
		# if self.cmp:
		# 	self.disconnect(self.cmp,0,0)
		# self.cmp=completer
		# if (not self.cmp):
		# 	return
		# self.cmp.setWidget(self)
		# self.cmp.setCompletionMode(QCompleter.PopupCompletion)
		# self.cmp.setCaseSensitivity(Qt.CaseInsensitive)
		# super(CustomLineEdit,self).setCompleter(completer)
		#self.connect(self.completer(),


	def insertCompletion(self,string):
		# tc=self.textCursor()
		# tc.movePosition(QTextCursor.StartOfWord,QTextCursor.KeepAnchor)
		print(string,'str')
		print(self.text(),'.txt')
		self.insert(string)
		#self.insert(QString(str(self.text())+string))
		# self.setTextCursor(tc)

	# def keyPressEvent(self, event):
	# 	if event.key() == Qt.Key_Tab:
	# 		for item in self.completer.currentCompletion():
	# 			item = str(item)
	# 			if item.startswith(self.text()):
	# 				self.setText(self.text() + item)
	# 				break
	# 		event.accept()
	# 	else:
	# 		QLineEdit.keyPressEvent(self, event)


class Calculator(QWidget):
	def __init__(self, controller, completer=QCompleter()):
		super(Calculator, self).__init__()
		self.controller = controller
		self.initUI(completer)

	def initUI(self, completer):
		self.setStyleSheet("background-color: white")

		self.lineedit = CustomLineEdit(self)

		#completer.connect(completer,SIGNAL('activated(QString)'),self.lineedit.insertCompletion)
		completer.setCompletionMode(completer.PopupCompletion)
		self.lineedit.setCompleter(completer)

		self.lineedit.textChanged.connect(completer.setCompletionPrefix)
		self.lineedit.setPlaceholderText("Enter Expression")
		self.lineedit.setStyleSheet("color: black; ")

		self.hbox_xyz = QHBoxLayout()
		self.x = QPushButton("x")
		self.y = QPushButton("y")
		self.z = QPushButton("z")
		self.hbox_xyz.addWidget(self.x)
		self.hbox_xyz.addWidget(self.y)
		# self.hbox_xyz.addWidget(self.z)
		self.x.setStyleSheet("color: black; background-color: white; ")
		self.y.setStyleSheet("color: black; background-color: white; ")
		self.z.setStyleSheet("color: black; background-color: white; ")

		self.grid = QGridLayout()
		self.abs = QPushButton("abs()")
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
		self.pi = QPushButton("pi")
		self.back = QPushButton("DEL")
		self.point = QPushButton(".")
		self.left_p = QPushButton("(")
		self.right_p = QPushButton(")")
		self.add = QPushButton("+")
		self.subtract = QPushButton("-")
		self.mult = QPushButton("*")
		self.divide = QPushButton("/")
		self.power = QPushButton("^")
		# self.grid.addWidget(self.n1, 0, 0)
		# self.grid.addWidget(self.n2, 0, 1)
		# self.grid.addWidget(self.n3, 0, 2)
		# self.grid.addWidget(self.n4, 0, 3)
		# self.grid.addWidget(self.n5, 1, 0)
		# self.grid.addWidget(self.n6, 1, 1)
		# self.grid.addWidget(self.n7, 1, 2)
		# self.grid.addWidget(self.n8, 1, 3)
		# self.grid.addWidget(self.n9, 2, 0)
		# self.grid.addWidget(self.n0, 2, 1)
		# self.grid.addWidget(self.e, 2, 2)
		# self.grid.addWidget(self.back, 2, 3)
		# self.grid.addWidget(self.point, 3, 0)
		# self.grid.addWidget(self.left_p, 3, 1)
		# self.grid.addWidget(self.right_p, 3, 2)
		# self.grid.addWidget(self.add, 3, 3)
		# self.grid.addWidget(self.subtract, 4, 0)
		# self.grid.addWidget(self.mult, 4, 1)
		# self.grid.addWidget(self.divide, 4, 2)
		# self.grid.addWidget(self.power, 4, 3)
		self.grid.addWidget(self.e, 0, 0)
		self.grid.addWidget(self.abs, 0, 1)
		self.grid.addWidget(self.pi, 0, 2)
		self.grid.addWidget(self.back, 0, 3)
		self.grid.addWidget(self.point, 1, 0)
		self.grid.addWidget(self.left_p, 1, 1)
		self.grid.addWidget(self.right_p, 1, 2)
		self.grid.addWidget(self.add, 1, 3)
		self.grid.addWidget(self.subtract, 2, 0)
		self.grid.addWidget(self.mult, 2, 1)
		self.grid.addWidget(self.divide, 2, 2)
		self.grid.addWidget(self.power, 2, 3)


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
		self.logbtn.addItem("log(x,2)")
		self.logbtn.addItem("ln(x)")
		self.logbtn.addItem("log(x,10)")
		# self.logbtn.addItem("logb(x)")
		self.explbl = QLabel("Exponential")
		self.expbtn = QComboBox()
		self.expbtn.addItem("exp(x)")
		self.expbtn.addItem("sqrt(x)")
		self.expbtn.addItem("x^y")
		self.expbtn.addItem("x^2")
		self.expbtn.addItem("x^3")
		# self.expbtn.addItem("cuberoot(x)")
		# self.expbtn.addItem("n root(x)")
		# self.callbl = QLabel("Calculus")
		# self.calbtn = QComboBox()
		# self.calbtn.addItem("derivation w.r.t.(x)")
		# self.calbtn.addItem("integration w.r.t.(x)")
		# self.linearlbl = QLabel("Linear Algebra")
		# self.linearbtn = QComboBox()
		# self.linearbtn.addItem("m*x+c")
		self.grid_func.addWidget(self.trlbl,0,0)
		self.grid_func.addWidget(self.trbtn,0,1)
		self.grid_func.addWidget(self.explbl,1,0)
		self.grid_func.addWidget(self.expbtn,1,1)
		self.grid_func.addWidget(self.loglbl,2,0)
		self.grid_func.addWidget(self.logbtn,2,1)
		# self.grid_func.addWidget(self.linearlbl,3,0)
		# self.grid_func.addWidget(self.linearbtn,3,1)
		# self.grid_func.addWidget(self.callbl,4,0)
		# self.grid_func.addWidget(self.calbtn,4,1)

		self.hbox_select = QHBoxLayout()
		self.plotbtn = QPushButton("PLOT")
		self.clrbtn = QPushButton("CLEAR")
		self.hbox_select.addWidget(self.plotbtn)
		self.hbox_select.addWidget(self.clrbtn)

		self.main_layout = QVBoxLayout()
		self.main_layout.addWidget(self.lineedit)
		self.main_layout.addLayout(self.hbox_xyz)
		self.main_layout.addLayout(self.grid)
		self.main_layout.addLayout(self.grid_func)
		self.main_layout.addLayout(self.hbox_select)

		self.setLayout(self.main_layout)

		self.abs.setStyleSheet("color: black; background-color: white; ")
		self.pi.setStyleSheet("color: black; background-color: white; ")
		self.n1.setStyleSheet("color: black; background-color: white; ")
		self.n2.setStyleSheet("color: black; background-color: white; ")
		self.n3.setStyleSheet("color: black; background-color: white; ")
		self.n4.setStyleSheet("color: black; background-color: white; ")
		self.n5.setStyleSheet("color: black; background-color: white; ")
		self.n6.setStyleSheet("color: black; background-color: white; ")
		self.n7.setStyleSheet("color: black; background-color: white; ")
		self.n8.setStyleSheet("color: black; background-color: white; ")
		self.n9.setStyleSheet("color: black; background-color: white; ")
		self.n0.setStyleSheet("color: black; background-color: white; ")
		self.e.setStyleSheet("color: black; background-color: white; ")
		self.back.setStyleSheet("color: black; background-color: white; ")
		self.point.setStyleSheet("color: black; background-color: white; ")
		self.left_p.setStyleSheet("color: black; background-color: white; ")
		self.right_p.setStyleSheet("color: black; background-color: white; ")
		self.add.setStyleSheet("color: black; background-color: white; ")
		self.subtract.setStyleSheet("color: black; background-color: white; ")
		self.mult.setStyleSheet("color: black; background-color: white; ")
		self.divide.setStyleSheet("color: black; background-color: white; ")
		self.power.setStyleSheet("color: black; background-color: white; ")

		self.trlbl.setStyleSheet("color: black; background-color: white; ")
		self.trbtn.setStyleSheet("color: black; background-color: white; ")
		self.expbtn.setStyleSheet("color: black; background-color: white; ")
		self.explbl.setStyleSheet("color: black; background-color: white; ")
		self.logbtn.setStyleSheet("color: black; background-color: white; ")
		self.loglbl.setStyleSheet("color: black; background-color: white; ")
		# self.callbl.setStyleSheet("color: black; background-color: white; ")
		# self.calbtn.setStyleSheet("color: black; background-color: white; ")
		# self.linearbtn.setStyleSheet("color: black; background-color: white; ")
		# self.linearlbl.setStyleSheet("color: black; background-color: white; ")

		self.plotbtn.setStyleSheet("color: black; background-color: white; ")
		self.clrbtn.setStyleSheet("color: black; background-color: white; ")

		self.connect(self.trbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.logbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.expbtn, SIGNAL("activated(QString)"), self.comboEvent)
		# self.connect(self.calbtn, SIGNAL("activated(QString)"), self.comboEvent)
		# self.connect(self.linearbtn, SIGNAL("activated(QString)"), self.comboEvent)
		self.connect(self.clrbtn, SIGNAL("clicked()"), self.lineedit.clear)
		self.connect(self.back, SIGNAL("clicked()"), self.lineedit.backspace)
		self.connect(self.x, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.y, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.z, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.abs, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.pi, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n1, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n2, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n3, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n4, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n5, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n6, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n7, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n8, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n9, SIGNAL("clicked()"), self.buttonEvent)
		# self.connect(self.n0, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.left_p, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.right_p, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.point, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.add, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.subtract, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.divide, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.power, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.mult, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.e, SIGNAL("clicked()"), self.buttonEvent)
		self.connect(self.plotbtn, SIGNAL("clicked()"), self.plot_btn_handler)


	def open_btn_handler(self):
		filename = QFileDialog.getOpenFileName(self, "Open Plot Data File", "")
		filename = str(filename)
		self.controller.plotInput(input=filename, isfile=True)

	def plot_btn_handler(self):
		function = self.lineedit.text()
		self.controller.plotInput(input=function, isfile=False)

	def comboEvent(self, text):
		# if(self.sender()==self.linearbtn):
		# try:
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
		curr = self.lineedit.text() + text
		self.lineedit.setText(curr)

	def buttonEvent(self):
		if(self.sender().text()=="e"):
			self.lineedit.insert("exp()")
		else:
			self.lineedit.insert(self.sender().text())

	def keyPressEvent(self, QKeyEvent):
		if QKeyEvent.key() == Qt.Key_Return:
			self.plot_btn_handler()
