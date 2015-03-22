all: main.py
	python main.py -style plastique

test: test.py
	python test.py

install:
	

clean:
	find . -name \*.pyc -type f -delete
