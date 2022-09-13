############################################################################
# externals/sample_extlib/Library.mk
############################################################################

ifeq ($(CONFIG_EXTERNALS_SAMPLE_EXTLIB),y)
  EXTRA_LIBPATHS += -L "$(EXTLIBDIR)$(DELIM)sample_extlib"
  EXTRA_LIBS     += -lsample_extlib
endif

