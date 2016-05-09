CXX=g++
CFLAGS=-c -std=c++11 -Wall
objects= max_sub_test.o max_sub.o

all: test

test: $(objects)
	$(CXX) $(objects) -o test.out

max_sub.o: max_sub.cpp max_sub.h
	$(CXX) $(CFLAGS) max_sub.cpp

max_sub_test.o: max_sub_test.cpp max_sub.h
	$(CXX) $(CFLAGS) max_sub_test.cpp

clean:
	rm -rf test $(objects)