
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall
OBJECTS = problem2.o

problem2 : $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o problem2

problem2.o : problem2.cpp
	$(CC) $(CFLAGS) problem2.cpp

clean :
	rm *.o problem2
