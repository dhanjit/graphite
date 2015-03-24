SIP = sip-4.16.6
PYQT = PyQt-x11-gpl-4.11.3
NUMPY = numpy-1.3
MATPLOTLIB = matplotlib-1.4.3

all: sip-build pyqt-build matplotlib-build
	sudo make install

install: sip-install pyqt-install matplotlib-install

matplotlib-build: $(MATPLOTLIB)
	cd $(MATPLOTLIB) && python setup.py build && cd ..

matplotlib-install:
	cd $(MATPLOTLIB) && python setup.py install && cd ..

$(MATPLOTLIB):
	tar -xvf $(MATPLOTLIB).tar.gz && cd $(MATPLOTLIB) && python configure.py

pyqt-build: $(PYQT)
	cd $(PYQT) && make && cd ..

pyqt-install:
	cd $(PYQT) && sudo make install && cd ..

$(PYQT):
	tar -xvf $(PYQT).tar.gz && cd $(PYQT) && python configure.py

sip-build: $(SIP)
	cd $(SIP) && make && cd ..

sip-install:
	cd $(SIP) && sudo make install && cd ..

$(SIP):
	tar -xvf $(SIP).tar.gz && cd $(SIP) && python configure.py

clean:
	rm -rf $(SIP) $(MATPLOTLIB)
#	rm -rf $(SIP) $(PYQT) $(MATPLOTLIB)
