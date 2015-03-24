VPATH = /home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/designer
CONFIG      += plugin @QTCONFIG@ warn_on

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer

    # Work around QTBUG-39300.
    CONFIG -= android_install
}

lessThan(QT_MAJOR_VERSION, 5) {
    CONFIG += designer
}

TARGET      = pyqt4
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python3.4m
LIBS        += -L/usr/lib -lpython3.4m
DEFINES     += PYTHON_LIB=\\\"libpython3.4m.so\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /usr/lib/qt/plugins/designer

python.path = /usr/lib/qt/plugins/designer
python.files = python

INSTALLS    += target python
