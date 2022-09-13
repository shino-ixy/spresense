############################################################################
# externals/sample_extlib/Makefile
############################################################################

-include $(APPDIR)/Make.defs
-include $(SDKDIR)/Make.defs

BIN = libsample_extlib$(LIBEXT)

SAMPLE_EXTLIB_ROOT    = sample_extlib_src

SAMPLE_EXTLIB_DIRS    := $(shell find $(SAMPLE_EXTLIB_ROOT) -type d)
SAMPLE_EXTLIB_SRCS    := $(foreach dir, $(SAMPLE_EXTLIB_DIRS), $(wildcard $(dir)/*.c))
SAMPLE_EXTLIB_OBJS    := $(SAMPLE_EXTLIB_SRCS:.c=.o)

CSRCS         := $(SAMPLE_EXTLIB_SRCS)
CFLAGS        += -std=c99 -DENABLE_SAMPLE_EXTLIB
CFLAGS        += $(addprefix "-I", $(SAMPLE_EXTLIB_DIRS))

VPATH         := $(SAMPLE_EXTLIB_DIRS)
ROOTDEPPATH   := $(foreach dir,$(SAMPLE_EXTLIB_DIRS), --dep-path $(dir))

include $(APPDIR)/Application.mk
