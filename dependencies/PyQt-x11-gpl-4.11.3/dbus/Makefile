TARGET = qt.so
OFILES = dbus.o moc_helper.o
HFILES =  helper.h

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -I. -I/usr/include/dbus-1.0 -I/usr/lib/dbus-1.0/include -I/usr/include/python3.4m -I/usr/mkspecs/linux-g++ -I/usr/include/qt/QtCore -I/usr/include/qt
CFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
LFLAGS = -shared  -Wl,-O1 -Wl,-O1,--sort-common,--as-needed,-z,relro -Wl,-rpath,/usr/lib -Wl,--version-script=qt.exp
LIBS = -L/usr/lib -ldbus-1 -lQt5Core -lpthread -lpthread
MOC = /usr/lib/qt/bin/moc
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

moc_helper.cpp: helper.h
	$(MOC) -o moc_helper.cpp $<

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_qt; local: *; };' > qt.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3.4/site-packages/dbus/mainloop || mkdir -p $(DESTDIR)/usr/lib/python3.4/site-packages/dbus/mainloop
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3.4/site-packages/dbus/mainloop/$(TARGET)
	strip $(DESTDIR)/usr/lib/python3.4/site-packages/dbus/mainloop/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f dbus.o
	-rm -f moc_helper.o
	-rm -f moc_helper.cpp
	-rm -f qt.exp
