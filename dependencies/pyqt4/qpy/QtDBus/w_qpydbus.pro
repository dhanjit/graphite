# Tell the original .pro file about additional directories.
INCLUDEPATH = "/usr/include/python2.7" "../../QtDBus" "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/qpy/QtDBus"
CONFIG += release
VPATH = /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/qpy/QtDBus
include(/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/qpy/QtDBus/qpydbus.pro)
