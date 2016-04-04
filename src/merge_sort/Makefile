CXX=g++
CFLAGS=-c -std=c++11 -Wall
objects= merge_test.o merge_sort.o

all: test

test: $(objects)
	$(CXX) $(objects) -o test.out

merge_sort.o: merge_sort.cpp merge_sort.h
	$(CXX) $(CFLAGS) merge_sort.cpp

merge_test.o: merge_test.cpp merge_sort.h
	$(CXX) $(CFLAGS) merge_test.cpp

clean:
	rm -rf test $(objects)