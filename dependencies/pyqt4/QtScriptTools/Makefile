TARGET = QtScriptTools.so
OFILES = sipQtScriptToolscmodule.o sipQtScriptToolsQScriptEngineDebugger.o
HFILES = sipAPIQtScriptTools.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_SCRIPTTOOLS_LIB -DQT_GUI_LIB -DQT_SCRIPT_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.7 -I/usr/mkspecs/linux-g++ -I/usr/include/qt4/QtScriptTools -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtCore -I/usr/include/qt4 -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
LFLAGS = -Wl,-O1,--sort-common,--as-needed,-z,relro -shared  -Wl,-O1 -Wl,--version-script=QtScriptTools.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -lQtScriptTools -lQtGui -lQtScript -lQtCore -lXext -lX11 -lm -lpthread
MOC = /usr/lib/qt4/bin/moc
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

$(TARGET): $(OFILES)
	@echo '{ global: initQtScriptTools; local: *; };' > QtScriptTools.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtScriptTools/QtScriptToolsmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools/QtScriptToolsmod.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtScriptTools/qscriptenginedebugger.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools/qscriptenginedebugger.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtScriptToolscmodule.o
	-rm -f sipQtScriptToolsQScriptEngineDebugger.o
	-rm -f QtScriptTools.exp
