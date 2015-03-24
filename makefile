<<<<<<< HEAD
all: graphite/main.py
	python graphite/main.py -style plastique
=======
all: run.py
	python run.py -style plastique > graphite.log
>>>>>>> b04e346e0f68c199b89021cbc4312b6162bca82e

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
