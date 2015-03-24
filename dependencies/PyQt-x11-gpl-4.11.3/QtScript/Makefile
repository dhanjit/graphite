TARGET = QtScript.so
OFILES = sipQtScriptcmodule.o sipQtScriptQList0100QScriptValue.o sipQtScriptQList0100QScriptContextInfo.o sipQtScriptQScriptValueIterator.o sipQtScriptQScriptValuePropertyFlags.o sipQtScriptQScriptValueResolveFlags.o sipQtScriptQScriptValue.o sipQtScriptQScriptString.o sipQtScriptQScriptEngineAgent.o sipQtScriptQScriptSyntaxCheckResult.o sipQtScriptQScriptEngineQObjectWrapOptions.o sipQtScriptQScriptEngine.o sipQtScriptQScriptContextInfo.o sipQtScriptQScriptContext.o sipQtScriptQScriptClassPropertyIterator.o sipQtScriptQScriptClassQueryFlags.o sipQtScriptQScriptClass.o
HFILES = sipAPIQtScript.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_DISABLE_DEPRECATED_BEFORE=0x04ffff -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_SCRIPT_LIB -DQT_CORE_LIB -I. -I/usr/include/python3.4m -I/usr/mkspecs/linux-g++ -I/usr/include/qt/QtScript -I/usr/include/qt/QtCore -I/usr/include/qt
CFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
LFLAGS = -shared  -Wl,-O1 -Wl,-O1,--sort-common,--as-needed,-z,relro -Wl,-rpath,/usr/lib -Wl,--version-script=QtScript.exp
LIBS = -L/usr/lib -lQt5Script -lQt5Core -lpthread -lQt5Core -lpthread -lpthread
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

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_QtScript; local: *; };' > QtScript.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtScript || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtScript
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptengine.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptengine.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/QtScriptmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/QtScriptmod.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptclass.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptclass.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptcontextinfo.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptcontextinfo.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptvalue.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptvalue.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptstring.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptstring.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptengineagent.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptengineagent.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptvalueiterator.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptvalueiterator.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptcontext.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptcontext.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptclasspropertyiterator.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScript/qscriptclasspropertyiterator.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtScriptcmodule.o
	-rm -f sipQtScriptQList0100QScriptValue.o
	-rm -f sipQtScriptQList0100QScriptContextInfo.o
	-rm -f sipQtScriptQScriptValueIterator.o
	-rm -f sipQtScriptQScriptValuePropertyFlags.o
	-rm -f sipQtScriptQScriptValueResolveFlags.o
	-rm -f sipQtScriptQScriptValue.o
	-rm -f sipQtScriptQScriptString.o
	-rm -f sipQtScriptQScriptEngineAgent.o
	-rm -f sipQtScriptQScriptSyntaxCheckResult.o
	-rm -f sipQtScriptQScriptEngineQObjectWrapOptions.o
	-rm -f sipQtScriptQScriptEngine.o
	-rm -f sipQtScriptQScriptContextInfo.o
	-rm -f sipQtScriptQScriptContext.o
	-rm -f sipQtScriptQScriptClassPropertyIterator.o
	-rm -f sipQtScriptQScriptClassQueryFlags.o
	-rm -f sipQtScriptQScriptClass.o
	-rm -f QtScript.exp
