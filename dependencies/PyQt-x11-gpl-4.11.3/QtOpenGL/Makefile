TARGET = QtOpenGL.so
OFILES = sipQtOpenGLcmodule.o sipQtOpenGLQList0101QGLShader.o sipQtOpenGLQGLShaderProgram.o sipQtOpenGLQGLShaderShaderType.o sipQtOpenGLQGLShader.o sipQtOpenGLQGLPixelBuffer.o sipQtOpenGLQGLFramebufferObjectFormat.o sipQtOpenGLQGLFramebufferObject.o sipQtOpenGLQGLColormap.o sipQtOpenGLQGLBuffer.o sipQtOpenGLQGLWidget.o sipQtOpenGLQGLContextBindOptions.o sipQtOpenGLQGLContext.o sipQtOpenGLQGLFormatOpenGLVersionFlags.o sipQtOpenGLQGLFormat.o sipQtOpenGLQGLFormatOptions.o sipQtOpenGLQGL.o
HFILES = sipAPIQtOpenGL.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_DISABLE_DEPRECATED_BEFORE=0x04ffff -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/qpy/QtOpenGL -I/usr/include/python3.4m -I/usr/mkspecs/linux-g++ -I/usr/include/qt/QtOpenGL -I/usr/include/qt/QtGui -I/usr/include/qt/QtWidgets -I/usr/include/qt/QtPrintSupport -I/usr/include/qt/QtCore -I/usr/include/qt
CFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -march=i686 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
LFLAGS = -shared  -Wl,-O1 -Wl,-O1,--sort-common,--as-needed,-z,relro -Wl,-rpath,/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/qpy/QtOpenGL -Wl,-rpath,/usr/lib -Wl,--version-script=QtOpenGL.exp
LIBS = -L/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/qpy/QtOpenGL -L/usr/lib -lqpyopengl -lQt5OpenGL -lQt5Widgets -lQt5Gui -lQt5Core -lpthread -lQt5Gui -lQt5Core -lpthread -lQt5Widgets -lQt5PrintSupport -lQt5Core -lpthread -lGL -lXext -lX11 -lm -lpthread
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
	@echo '{ global: PyInit_QtOpenGL; local: *; };' > QtOpenGL.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python3.4/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qgl.sip $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL/qgl.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qglbuffer.sip $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL/qglbuffer.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qglcolormap.sip $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL/qglcolormap.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qglshaderprogram.sip $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL/qglshaderprogram.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qglframebufferobject.sip $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL/qglframebufferobject.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/QtOpenGLmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL/QtOpenGLmod.sip
	cp -f /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qglpixelbuffer.sip $(DESTDIR)/usr/share/sip/PyQt4/QtOpenGL/qglpixelbuffer.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtOpenGLcmodule.o
	-rm -f sipQtOpenGLQList0101QGLShader.o
	-rm -f sipQtOpenGLQGLShaderProgram.o
	-rm -f sipQtOpenGLQGLShaderShaderType.o
	-rm -f sipQtOpenGLQGLShader.o
	-rm -f sipQtOpenGLQGLPixelBuffer.o
	-rm -f sipQtOpenGLQGLFramebufferObjectFormat.o
	-rm -f sipQtOpenGLQGLFramebufferObject.o
	-rm -f sipQtOpenGLQGLColormap.o
	-rm -f sipQtOpenGLQGLBuffer.o
	-rm -f sipQtOpenGLQGLWidget.o
	-rm -f sipQtOpenGLQGLContextBindOptions.o
	-rm -f sipQtOpenGLQGLContext.o
	-rm -f sipQtOpenGLQGLFormatOpenGLVersionFlags.o
	-rm -f sipQtOpenGLQGLFormat.o
	-rm -f sipQtOpenGLQGLFormatOptions.o
	-rm -f sipQtOpenGLQGL.o
	-rm -f QtOpenGL.exp
