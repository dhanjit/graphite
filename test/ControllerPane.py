import sys
from PyQt4 import QtGui


class ControllerPane(QtGui.QWidget):

	def __init__(self):
		super(ControllerPane, self).__init__()
		self.drawGrid()

	def drawGrid(self):
		grid = QtGui.QGridLayout()

		names = ['Differentiate','Integrate','Save','Close']
		positions = [(i,j) for i in range(2) for j in range(2)]
		for position, name in zip(positions, names):
			if name == '':
				continue
			button = QtGui.QPushButton(name)
			grid.addWidget(button, *position)
		self.setLayout(grid)
		
		self.move(150,150)
		self.setWindowTitle("Functions")
		self.show()


def main():
	app = QtGui.QApplication(sys.argv)
	ex = ControllerPane()
	sys.exit(app.exec_())


if __name__ == '__main__':
    main()