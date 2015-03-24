all: 
#	cd dependencies && $(MAKE)
	python main.py -style plastique

test: test.py
	python tests/test.py

install:
	python setup.py install

clean:
	find . -name \*.pyc -type f -delete