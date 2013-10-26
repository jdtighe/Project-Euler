
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall
OBJECTS = problem1.o

problem1 : $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o problem1

problem1.o : problem1.cpp
	$(CC) $(CFLAGS) problem1.cpp

clean :
	rm *.o problem1
