import sys
from PyQt4 import QtGui


class Dialog(QtGui.QInputDialog):

	def __init__(self):
		super(Dialog,self).__init__()

	def showDialog(self,labeltext,n):
		if(n==2):
			text, ok = self.getText(self, 'Input Dialog',labeltext)
			if ok:
				if ',' in text:
					return text
				else:
					return self.showDialog("Wrong Input\nEnter again",2)

		elif (n==1):
			text, ok = self.getText(self, 'Input Dialog',labeltext)
			if ok:
				temp=str(text)
				if temp.isdigit():
					return temp
				else:
					return self.showDialog("Wrong Input\nEnter again",1)        
