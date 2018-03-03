CC=g++
CFLAGS=-Wall -c

all: Wieloklasowiec

Wieloklasowiec: main.o counter.o talker.o
	$(CC) main.o counter.o talker.o -o Wieloklasowiec

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

counter.o: counter.cpp
	$(CC) $(CFLAGS) counter.cpp

talker.o: talker.cpp
	$(CC) $(CFLAGS) talker.cpp

clean:
	rm -rf *o Wieloklasowiec