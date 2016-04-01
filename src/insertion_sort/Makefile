CXX=g++
CFLAGS=-c -std=c++11 -Wall
objects= insertion_test.o insertion_sort.o

all: test

test: $(objects)
	$(CXX) $(objects) -o test.out

insertion_sort.o: insertion_sort.cpp insertion_sort.h
	$(CXX) $(CFLAGS) insertion_sort.cpp

insertion_test.o: insertion_test.cpp insertion_sort.h
	$(CXX) $(CFLAGS) insertion_test.cpp

clean:
	rm -rf test $(objects)