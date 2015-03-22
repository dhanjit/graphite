all: main.py
	python main.py

test: test.py
	python test.py

install:
	

clean:
	find . -name \*.pyc -type f -delete
