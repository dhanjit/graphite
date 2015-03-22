all: main.py
	python main.py

test: test.py
	python test.py

clean:
	find . -name \*.pyc -type f -delete
