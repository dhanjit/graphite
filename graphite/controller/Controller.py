from graphite.ui.viewport.Viewport import Viewport
from graphite.ui.aggregator.Aggregator import Aggregator
from graphite.ui.input.Input import Input
from graphite.ui.Tab import Tab
from graphite.model.ModelCreator import ModelCreator
from graphite.controller.globalSettings import Customize


class Controller():
	
	def __init__(self, inputhandler):
		self.aggregator = Aggregator(self)
		self.input = Input(self, completer=inputhandler.completer)
		self.viewport = Viewport()

		self.global_settings = {} #just for passing to Customize, will be removed 
		self.settings = Customize(self)

		self.tabid = -1
		self.tabs = None

		self.tab = Tab(self.aggregator, self.input, self.viewport,self.settings)
		self.inputhandler = inputhandler

	def plotInput(self, input, isfile):
		try:
			print "trying to create model"
			model = self.createModel(input, isfile)
			if isfile:
				self.input.filevisualizer.setTableData(plottable=model.getPlottable())
		except Exception, e:
			print repr(e)
		try:
			print "trying to add model"
			self.addModelToAggregator(model)
		except Exception, e:
			print repr(e)
		try:
			print "trying to update aggregator"
			self.aggregator.updateCurrentType()
		except Exception, e:
			print repr(e)
		try:
			print "trying to update viewport"
			self.updateViewport()
		except Exception, e:
			print repr(e)

	def createModel(self, input, isfile):
		if isfile:
			model = ModelCreator.createModelFromFile(self.inputhandler.fileformathandler, input)
		else:
			model = ModelCreator.createModelFromExpression(self.inputhandler.parser, input)
		return model

	def addModelToAggregator(self, model):
		self.aggregator.addModel(model)
		self.tabs.setTabText(self.tabid, str(model.expression) or model.filename)
		# self.aggregator.clearSelection()
		# self.aggregator.selectModel(-1) #-1 for last model
		print('model added to aggregator')

	def updateViewport(self):
		self.viewport.updateSettings(self.global_settings)
		print("canvas type:", self.viewport.canvastype)
		self.viewport.updateCanvas(self.aggregator)
		self.viewport.showCanvas()
#		self.viewport.canvas.axes.clear()
#		self.draw_canvas()


