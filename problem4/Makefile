
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall
OBJECTS = problem4.o

problem4 : $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o problem4

problem4.o : problem4.cpp
	$(CC) $(CFLAGS) problem4.cpp

clean :
	rm *.o problem4
