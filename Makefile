ODIR=obj
IDIR=includes
SDIR=src

CC=gcc
GFLAGS=-I.$(IDIR)

SORTDEPS=src/sorting/insertion.h src/sorting/merge.h

DEPS=src/lightsaber.h src/debug.h $(SORTDEPS)
#DEPS=$(patsubst %,$(IDIR)/%, $(_DEPS))

OBJ=src/main.c \
		src/debug.c \
		src/sorting/insertion.o \
		src/sorting/merge.o
#OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lightsaber: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean: 
	rm -rf lightsaber \
					src/*.o \
					src/sorting/*.o
