
all: run.py
	python run.py -style plastique > graphite.log

test: test.py
	python tests/test.py

install: sip pyqt4
	python setup.py install

pyqt4: 	dependencies/pyqt4
	cd dependencies/pyqt4 && make install && cd ..

sip:	dependencies/sip
	cd dependencies/sip
	python configure.py
	&& make install
	&& cd ..

clean:
	find . -name \*.pyc -type f -delete
