.PHONY : all doc clean

all :
	( cd src && $(MAKE) $@)

doc : 
	(cd docu && $(MAKE) $@)

clean : 
	(cd src && $(MAKE) $@)
	(cd docu && $(MAKE) $@)
