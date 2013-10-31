
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall
OBJECTS = problem3.o

problem3 : $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o problem3

problem3.o : problem3.cpp
	$(CC) $(CFLAGS) problem3.cpp

clean :
	rm *.o problem3
