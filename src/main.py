from model import *
from aggregator import *
from numpy import arange
from parser import *

def main():
	parser = Parser()
	aggregator = Aggregator()
	model = parser.parse("x + 1")
	model.eval(arange(-3.0, 3.0, 0.2))
	aggregator.insert_model(model)

if __name__ == '__main__':
	main()