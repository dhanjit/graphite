all: 
	cd dependencies && $(MAKE)
run:
	python main.py

test: test.py
	python tests/test.py

clean:
	find . -name \*.pyc -type f -delete
