TARGET = QtHelp.so
OFILES = sipQtHelpcmodule.o sipQtHelpQList0100QHelpSearchQuery.o sipQtHelpQMap0100QString0100QUrl.o sipQtHelpQList0100QStringList.o sipQtHelpQHelpSearchResultWidget.o sipQtHelpQHelpSearchQueryWidget.o sipQtHelpQHelpSearchEngine.o sipQtHelpQHelpSearchQuery.o sipQtHelpQHelpIndexWidget.o sipQtHelpQHelpIndexModel.o sipQtHelpQHelpEngine.o sipQtHelpQHelpEngineCore.o sipQtHelpQHelpContentWidget.o sipQtHelpQHelpContentModel.o sipQtHelpQHelpContentItem.o
HFILES = sipAPIQtHelp.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_DISABLE_DEPRECATED_BEFORE=0x04ffff -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/usr/include/python3.4m -I/usr/mkspecs/linux-g++ -I/usr/include/qt/QtHelp -I/usr/include/qt/QtGui -I/usr/include/qt/QtWidgets -I/usr/include/qt/QtPrintSupport -I/usr/include/qt/QtCore -I/usr/include/qt
CFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
LFLAGS = -shared  -Wl,-O1 -Wl,-O1,--sort-common,--as-needed,-z,relro -Wl,-rpath,/usr/lib -Wl,--version-script=QtHelp.exp
LIBS = -L/usr/lib -lQt5Help -lQt5Widgets -lQt5Gui -lQt5Core -lpthread -lQt5Gui -lQt5Core -lpthread -lQt5Widgets -lQt5PrintSupport -lQt5Core -lpthread -lXext -lX11 -lm -lpthread
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
	@echo '{ global: PyInit_QtHelp; local: *; };' > QtHelp.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtHelp || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtHelp
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/qhelpsearchquerywidget.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/qhelpsearchquerywidget.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/qhelpenginecore.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/qhelpenginecore.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/qhelpcontentwidget.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/qhelpcontentwidget.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/qhelpsearchengine.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/qhelpsearchengine.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/qhelpsearchresultwidget.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/qhelpsearchresultwidget.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/qhelpengine.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/qhelpengine.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/qhelpindexwidget.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/qhelpindexwidget.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtHelp/QtHelpmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtHelp/QtHelpmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtHelpcmodule.o
	-rm -f sipQtHelpQList0100QHelpSearchQuery.o
	-rm -f sipQtHelpQMap0100QString0100QUrl.o
	-rm -f sipQtHelpQList0100QStringList.o
	-rm -f sipQtHelpQHelpSearchResultWidget.o
	-rm -f sipQtHelpQHelpSearchQueryWidget.o
	-rm -f sipQtHelpQHelpSearchEngine.o
	-rm -f sipQtHelpQHelpSearchQuery.o
	-rm -f sipQtHelpQHelpIndexWidget.o
	-rm -f sipQtHelpQHelpIndexModel.o
	-rm -f sipQtHelpQHelpEngine.o
	-rm -f sipQtHelpQHelpEngineCore.o
	-rm -f sipQtHelpQHelpContentWidget.o
	-rm -f sipQtHelpQHelpContentModel.o
	-rm -f sipQtHelpQHelpContentItem.o
	-rm -f QtHelp.exp
