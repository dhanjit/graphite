# Tell the original .pro file about additional directories.
INCLUDEPATH = "/usr/include/python2.7" "../../QtOpenGL" "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/qpy/QtOpenGL"
CONFIG += release
VPATH = /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/qpy/QtOpenGL
include(/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/qpy/QtOpenGL/qpyopengl.pro)
