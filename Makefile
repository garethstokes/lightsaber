ODIR=obj
IDIR=includes
SDIR=src

CC=gcc
GFLAGS=-I.$(IDIR)

DEPS=src/lightsaber.h src/debug.h src/sorting/insertion.h
#DEPS=$(patsubst %,$(IDIR)/%, $(_DEPS))

OBJ=src/main.c \
		src/debug.c \
		src/sorting/insertion.o
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
