SRCDIR = ../src/cujo
TESTDIR = .
ODIR = ./obj
TESTODIR = ./test_obj

CC = g++
CPPFLAGS = -std=c++14 -g -I$(SRCDIR) -I$(TESTDIR)
LDFLAGS = -lpthread

_OBJS = cujo.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

_TESTOBJS = test_driver.o test_cujo.o
TESTOBJS = $(patsubst %,$(TESTODIR)/%,$(_TESTOBJS))

TARGETS = test_driver

ALL: $(TARGETS)

test_driver: $(TESTOBJS) $(OBJS)
    $(CC) -o $@ $(TESTOBJS) $(OBJS) $(CPPFLAGS) $(LDFLAGS)

$(ODIR)/%.o: $(SRCDIR)/%.cpp $(ODIR)
    $(CC) -c -o $@ $< $(CPPFLAGS)

$(TESTODIR)/%.o: $(TESTDIR)/%.cpp $(TESTODIR)
    $(CC) -c -o $@ $< $(CPPFLAGS)

$(ODIR):
    mkdir $@

$(TESTODIR):
    mkdir $@

.PHONY: clean

clean:
    rm -f $(ODIR)/*.o
    rm -f $(TESTODIR)/*.o
    rm test_driver
    rmdir $(ODIR)
    rmdir $(TESTODIR)
