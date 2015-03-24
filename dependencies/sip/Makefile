
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/usr/lib/python3.4/site-packages || mkdir -p $(DESTDIR)/usr/lib/python3.4/site-packages
	cp -f sipconfig.py $(DESTDIR)/usr/lib/python3.4/site-packages/sipconfig.py
	cp -f /home/archen/MyRepos/graphite/dependencies/sip/sipdistutils.py $(DESTDIR)/usr/lib/python3.4/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
