############################################################################
# externals/sample_extlib/LibIncludes.mk
############################################################################
ifeq ($(CONFIG_EXTERNALS_SAMPLE_EXTLIB),y)
CFLAGS += -std=c99 -DENABLE_SAMPLE_EXTLIB
endif

ifeq ($(CONFIG_EXTERNALS_SAMPLE_EXTLIB),y)
CFLAGS   += ${shell $(INCDIR) $(INCDIROPT) "$(CC)" "$(SDKDIR)/../externals/sample_extlib/sample_extlib_src"}
endif
