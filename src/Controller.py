from src.ui.viewport.Viewport import Viewport
from src.ui.aggregator.Aggregator import Aggregator
from src.ui.input.Input import Input
from src.ui.Tab import Tab
from .model.ModelCreator import ModelCreator

class Controller():
	
	def __init__(self, inputhandler):
		self.aggregator = Aggregator()
		self.input = Input(self)
		self.viewport = Viewport()

		self.tab = Tab(self.aggregator, self.input, self.viewport )

		self.inputhandler = inputhandler

	def plotInput(self, input, isFile):
		model = self.createModel(input, isFile)
		self.addModelToAggregator(model)
		self.updateViewport()

	def createModel(self, input, isFile):
		if isFile:
			return ModelCreator.createModelFromFile(self.inputhandler.fileformathandler, input)
		else:
			return ModelCreator.createModelFromExpression(self.inputhandler.parser, input)

	def addModelToAggregator(self, model):
		self.aggregator.addModel(model)
		self.aggregator.clearSelection()

	def updateViewport(self):
		self.viewport.updateView(self.aggregator)
#		self.viewport.canvas.axes.clear()
#		self.draw_canvas()


