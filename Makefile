ifeq ($(shell uname -s),Darwin)
CC = clang
else
CC = gcc
endif
APPCC = ${CC} -g -c
APPLNK = ${CC}
LIBCC = ${APPCC} -fPIC
LIBLNK = ${CC} -shared

all: cirrus

clean:
	rm -f cirrus

.PHONY:
	clean

OBJS = cirrus.o driver.o

cirrus: ${OBJS}
	${APPLNK} ${OBJS} -o $@

cirrus.o: cirrus.c
	${APPCC} cirrus.c

driver.o: driver.c
	${APPCC} driver.c

cirrus.c: cirrus.h driver.h
	touch cirrus.c

driver.c: driver.h
	touch driver.c

