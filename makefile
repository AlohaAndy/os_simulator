CC = gcc
DEBUG = -g
CFLAGS = -Wall -std=c99 -c $(DEBUG)
LFLAGS = -Wall -std=c99 $(DEBUG)

sim04: sim04.o readData.o structures.o process.o SimpleTimer.o
	$(CC) $(LFLAGS) sim04.o readData.o structures.o process.o -lpthread SimpleTimer.o -o sim04

sim04.o: sim04.c readData.h structures.h
	$(CC) $(CFLAGS) sim04.c

readDatas.o: readData.c readDatas.h
	$(CC) $(CFLAGS) readData.c

structures.o: structures.c structures.h
	$(CC) $(CFLAGS) structures.c

process.o: process.c process.h
	$(CC) $(CFLAGS) process.c

SimpleTimer.o: SimpleTimer.c SimpleTimer.h
	$(CC) $(CFLAGS) SimpleTimer.c

clean:
	-\rm *.oS
