TARGET = QtMultimedia.so
OFILES = sipQtMultimediacmodule.o sipQtMultimediaQList0100QAudioDeviceInfo.o sipQtMultimediaQVideoSurfaceFormat.o sipQtMultimediaQList0100QVideoFramePixelFormat.o sipQtMultimediaQVideoFrame.o sipQtMultimediaQAudioOutput.o sipQtMultimediaQAudioInput.o sipQtMultimediaQList0100QAudioFormatSampleType.o sipQtMultimediaQList0100QAudioFormatEndian.o sipQtMultimediaQAudioFormat.o sipQtMultimediaQAudioDeviceInfo.o sipQtMultimediaQAudio.o sipQtMultimediaQAbstractVideoSurface.o sipQtMultimediaQAbstractVideoBuffer.o
HFILES = sipAPIQtMultimedia.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.7 -I/usr/mkspecs/linux-g++ -I/usr/include/qt4/QtMultimedia -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtCore -I/usr/include/qt4 -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
LFLAGS = -Wl,-O1,--sort-common,--as-needed,-z,relro -shared  -Wl,-O1 -Wl,--version-script=QtMultimedia.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -lQtMultimedia -lQtGui -lQtCore -lXext -lX11 -lm -lpthread
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
	@echo '{ global: initQtMultimedia; local: *; };' > QtMultimedia.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qaudio.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qaudio.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qaudiodeviceinfo.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qaudiodeviceinfo.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qaudioformat.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qaudioformat.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qvideoframe.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qvideoframe.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qvideosurfaceformat.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qvideosurfaceformat.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qabstractvideobuffer.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qabstractvideobuffer.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/QtMultimediamod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/QtMultimediamod.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qaudiooutput.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qaudiooutput.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qabstractvideosurface.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qabstractvideosurface.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtMultimedia/qaudioinput.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMultimedia/qaudioinput.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtMultimediacmodule.o
	-rm -f sipQtMultimediaQList0100QAudioDeviceInfo.o
	-rm -f sipQtMultimediaQVideoSurfaceFormat.o
	-rm -f sipQtMultimediaQList0100QVideoFramePixelFormat.o
	-rm -f sipQtMultimediaQVideoFrame.o
	-rm -f sipQtMultimediaQAudioOutput.o
	-rm -f sipQtMultimediaQAudioInput.o
	-rm -f sipQtMultimediaQList0100QAudioFormatSampleType.o
	-rm -f sipQtMultimediaQList0100QAudioFormatEndian.o
	-rm -f sipQtMultimediaQAudioFormat.o
	-rm -f sipQtMultimediaQAudioDeviceInfo.o
	-rm -f sipQtMultimediaQAudio.o
	-rm -f sipQtMultimediaQAbstractVideoSurface.o
	-rm -f sipQtMultimediaQAbstractVideoBuffer.o
	-rm -f QtMultimedia.exp
