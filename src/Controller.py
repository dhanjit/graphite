from src.ui.viewport.Viewport import Viewport
from src.ui.aggregator.Aggregator import Aggregator
from src.ui.input.Input import Input
from src.ui.Tab import Tab
from .model.ModelCreator import ModelCreator
from src.ui.aggregateSettings import Customize

class Controller():
	
	def __init__(self, inputhandler):
		self.aggregator = Aggregator(self)
		self.input = Input(self)
		self.viewport = Viewport()
		self.global_settings = Customize()

		self.tab = Tab(self.aggregator, self.input, self.viewport,self.global_settings)

		self.inputhandler = inputhandler

	def plotInput(self, input, isfile):
		model = self.createModel(input, isfile)
		if isfile:
			self.input.filevisualizer.setTableData(plottable=model.getPlottable())
		else:
			pass
		self.addModelToAggregator(model)
		self.updateViewport()

	def createModel(self, input, isfile):
		if isfile:
			model = ModelCreator.createModelFromFile(self.inputhandler.fileformathandler, input)
		else:
			model = ModelCreator.createModelFromExpression(self.inputhandler.parser, input)
		return model

	def addModelToAggregator(self, model):
		self.aggregator.addModel(model)
		self.aggregator.clearSelection()
		self.aggregator.selectModel(-1) #-1 for last model
		print('model added to aggregator')

	def updateViewport(self):
		self.viewport.updateSettings()
		print(self.viewport.canvastype)
		self.viewport.updateCanvas(self.aggregator)
		self.viewport.showCanvas()
#		self.viewport.canvas.axes.clear()
#		self.draw_canvas()


