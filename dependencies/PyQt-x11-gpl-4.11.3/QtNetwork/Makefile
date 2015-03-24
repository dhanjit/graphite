TARGET = QtNetwork.so
OFILES = sipQtNetworkcmodule.o sipQtNetworkQList0100QSslCipher.o sipQtNetworkQList0100QSslCertificate.o sipQtNetworkQList0100QNetworkProxy.o sipQtNetworkQList0100QNetworkInterface.o sipQtNetworkQList0100QNetworkAddressEntry.o sipQtNetworkQList0100QNetworkCookie.o sipQtNetworkQList0100QNetworkConfiguration.o sipQtNetworkQList0100QSslError.o sipQtNetworkQList0100QHostAddress.o sipQtNetworkQPair0100QHostAddress1800.o sipQtNetworkQUrlInfo.o sipQtNetworkQUdpSocketBindMode.o sipQtNetworkQUdpSocket.o sipQtNetworkQTcpServer.o sipQtNetworkQSslSocket.o sipQtNetworkQTcpSocket.o sipQtNetworkQSslKey.o sipQtNetworkQSslError.o sipQtNetworkQSslCipher.o sipQtNetworkQSslConfiguration.o sipQtNetworkQMultiMap0100QSslAlternateNameEntryType0100QString.o sipQtNetworkQSslCertificate.o sipQtNetworkQSslSslOptions.o sipQtNetworkQSsl.o sipQtNetworkQNetworkSession.o sipQtNetworkQNetworkRequest.o sipQtNetworkQNetworkReply.o sipQtNetworkQNetworkProxyFactory.o sipQtNetworkQNetworkProxyQuery.o sipQtNetworkQNetworkProxyCapabilities.o sipQtNetworkQNetworkProxy.o sipQtNetworkQNetworkInterfaceInterfaceFlags.o sipQtNetworkQNetworkInterface.o sipQtNetworkQNetworkAddressEntry.o sipQtNetworkQNetworkDiskCache.o sipQtNetworkQNetworkCookieJar.o sipQtNetworkQNetworkCookie.o sipQtNetworkQNetworkConfigurationStateFlags.o sipQtNetworkQNetworkConfiguration.o sipQtNetworkQNetworkConfigurationManagerCapabilities.o sipQtNetworkQNetworkConfigurationManager.o sipQtNetworkQNetworkAccessManager.o sipQtNetworkQLocalSocket.o sipQtNetworkQLocalServer.o sipQtNetworkQHttpMultiPart.o sipQtNetworkQHttpPart.o sipQtNetworkQHttp.o sipQtNetworkQHttpRequestHeader.o sipQtNetworkQHttpResponseHeader.o sipQtNetworkQHttpHeader.o sipQtNetworkQHostInfo.o sipQtNetworkQ_IPV6ADDR.o sipQtNetworkQHostAddress.o sipQtNetworkQFtp.o sipQtNetworkQAuthenticator.o sipQtNetworkQAbstractSocket.o sipQtNetworkQAbstractNetworkCache.o sipQtNetworkQNetworkCacheMetaData.o sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.o
HFILES = sipAPIQtNetwork.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_NETWORK_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.7 -I/usr/mkspecs/linux-g++ -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtCore -I/usr/include/qt4
CFLAGS = -pipe -fPIC -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -march=x86-64 -mtune=generic -O2 -pipe -fstack-protector-strong --param=ssp-buffer-size=4 -Wall -W -D_REENTRANT
LFLAGS = -Wl,-O1,--sort-common,--as-needed,-z,relro -shared  -Wl,-O1 -Wl,--version-script=QtNetwork.exp
LIBS = -L/usr/lib -lQtNetwork -lQtCore -lpthread
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
	@echo '{ global: initQtNetwork; local: *; };' > QtNetwork.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.7/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qtcpsocket.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qtcpsocket.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworksession.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworksession.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qhttp.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qhttp.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qurlinfo.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qurlinfo.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkaccessmanager.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkaccessmanager.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qudpsocket.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qudpsocket.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qdnslookup.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qdnslookup.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkinterface.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkinterface.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qhostinfo.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qhostinfo.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qssl.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qssl.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qsslcertificate.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qsslcertificate.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qlocalserver.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qlocalserver.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkreply.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkreply.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qsslerror.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qsslerror.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qsslkey.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qsslkey.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qsslconfiguration.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qsslconfiguration.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkproxy.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkproxy.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qauthenticator.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qauthenticator.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qsslsocket.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qsslsocket.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qtcpserver.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qtcpserver.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qhostaddress.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qhostaddress.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qftp.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qftp.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qlocalsocket.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qlocalsocket.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkdiskcache.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkdiskcache.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qabstractsocket.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qabstractsocket.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkrequest.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkrequest.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qsslcipher.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qsslcipher.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qabstractnetworkcache.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qabstractnetworkcache.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkcookiejar.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkcookiejar.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkconfigmanager.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkconfigmanager.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkcookie.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkcookie.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qhttpmultipart.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qhttpmultipart.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkconfiguration.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qnetworkconfiguration.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/QtNetworkmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/QtNetworkmod.sip
	cp -f /home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qsslcertificateextension.sip $(DESTDIR)/usr/share/sip/PyQt4/QtNetwork/qsslcertificateextension.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtNetworkcmodule.o
	-rm -f sipQtNetworkQList0100QSslCipher.o
	-rm -f sipQtNetworkQList0100QSslCertificate.o
	-rm -f sipQtNetworkQList0100QNetworkProxy.o
	-rm -f sipQtNetworkQList0100QNetworkInterface.o
	-rm -f sipQtNetworkQList0100QNetworkAddressEntry.o
	-rm -f sipQtNetworkQList0100QNetworkCookie.o
	-rm -f sipQtNetworkQList0100QNetworkConfiguration.o
	-rm -f sipQtNetworkQList0100QSslError.o
	-rm -f sipQtNetworkQList0100QHostAddress.o
	-rm -f sipQtNetworkQPair0100QHostAddress1800.o
	-rm -f sipQtNetworkQUrlInfo.o
	-rm -f sipQtNetworkQUdpSocketBindMode.o
	-rm -f sipQtNetworkQUdpSocket.o
	-rm -f sipQtNetworkQTcpServer.o
	-rm -f sipQtNetworkQSslSocket.o
	-rm -f sipQtNetworkQTcpSocket.o
	-rm -f sipQtNetworkQSslKey.o
	-rm -f sipQtNetworkQSslError.o
	-rm -f sipQtNetworkQSslCipher.o
	-rm -f sipQtNetworkQSslConfiguration.o
	-rm -f sipQtNetworkQMultiMap0100QSslAlternateNameEntryType0100QString.o
	-rm -f sipQtNetworkQSslCertificate.o
	-rm -f sipQtNetworkQSslSslOptions.o
	-rm -f sipQtNetworkQSsl.o
	-rm -f sipQtNetworkQNetworkSession.o
	-rm -f sipQtNetworkQNetworkRequest.o
	-rm -f sipQtNetworkQNetworkReply.o
	-rm -f sipQtNetworkQNetworkProxyFactory.o
	-rm -f sipQtNetworkQNetworkProxyQuery.o
	-rm -f sipQtNetworkQNetworkProxyCapabilities.o
	-rm -f sipQtNetworkQNetworkProxy.o
	-rm -f sipQtNetworkQNetworkInterfaceInterfaceFlags.o
	-rm -f sipQtNetworkQNetworkInterface.o
	-rm -f sipQtNetworkQNetworkAddressEntry.o
	-rm -f sipQtNetworkQNetworkDiskCache.o
	-rm -f sipQtNetworkQNetworkCookieJar.o
	-rm -f sipQtNetworkQNetworkCookie.o
	-rm -f sipQtNetworkQNetworkConfigurationStateFlags.o
	-rm -f sipQtNetworkQNetworkConfiguration.o
	-rm -f sipQtNetworkQNetworkConfigurationManagerCapabilities.o
	-rm -f sipQtNetworkQNetworkConfigurationManager.o
	-rm -f sipQtNetworkQNetworkAccessManager.o
	-rm -f sipQtNetworkQLocalSocket.o
	-rm -f sipQtNetworkQLocalServer.o
	-rm -f sipQtNetworkQHttpMultiPart.o
	-rm -f sipQtNetworkQHttpPart.o
	-rm -f sipQtNetworkQHttp.o
	-rm -f sipQtNetworkQHttpRequestHeader.o
	-rm -f sipQtNetworkQHttpResponseHeader.o
	-rm -f sipQtNetworkQHttpHeader.o
	-rm -f sipQtNetworkQHostInfo.o
	-rm -f sipQtNetworkQ_IPV6ADDR.o
	-rm -f sipQtNetworkQHostAddress.o
	-rm -f sipQtNetworkQFtp.o
	-rm -f sipQtNetworkQAuthenticator.o
	-rm -f sipQtNetworkQAbstractSocket.o
	-rm -f sipQtNetworkQAbstractNetworkCache.o
	-rm -f sipQtNetworkQNetworkCacheMetaData.o
	-rm -f sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.o
	-rm -f QtNetwork.exp
