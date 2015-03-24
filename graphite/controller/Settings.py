class Settings(dict):
	def __init__(self):
		super(Settings,self).__init__()

	def load(self):
		pass

	def save(self):
		pass

	def reset(self):
		pass

	@staticmethod
	def getDefaultModelSettings():
		pass

	@staticmethod
	def getDefaultAggregatorSettings():
		pass