
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall
OBJECTS = problem6.o

problem6 : $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o problem6

problem6.o : problem6.cpp
	$(CC) $(CFLAGS) problem6.cpp

clean :
	rm *.o problem6
