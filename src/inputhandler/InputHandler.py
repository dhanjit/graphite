from src.inputhandler.filehandler.FileFormatHandler import *
from src.inputhandler.parser.Parser import *

class InputHandler:
	def __init__(self):
		self.parser = Parser()
		self.fileformathandler = FileFormatHandler()