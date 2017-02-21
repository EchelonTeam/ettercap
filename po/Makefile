EXTRA_DIST =  Makefile

# Warning: This is an automatically generated file, do not edit!

srcdir=.
top_srcdir=..

BUILD_DIR = .
INSTALL_DIR = /usr/share/locale

FILES = \
	ru.po

GMO_FILES = $(patsubst %.po,$(BUILD_DIR)/%.gmo,$(FILES))
MO_FILES = $(foreach po,$(FILES), $(INSTALL_DIR)/$(basename $(po))/LC_MESSAGES/hydra.mo)

all: $(GMO_FILES)

$(GMO_FILES): $(BUILD_DIR)/%.gmo: %.po
	mkdir -p $(BUILD_DIR)
	msgfmt '$<' -o '$@'
	
$(MO_FILES): $(INSTALL_DIR)/%/LC_MESSAGES/ettercap.mo : $(BUILD_DIR)/%.gmo
	mkdir -p $(dir $@)
	cp '$<' '$@'

install-local: $(MO_FILES)

CLEANFILES = $(GMO_FILES)

install: install-local

uninstall: $(INSTALL_DIR)/%/LC_MESSAGES/ettercap.mo
	$(INSTALL_DIR)/%
	rm '$<'

clean:
	-rm $(BUILD_DIR)/*.gmo

