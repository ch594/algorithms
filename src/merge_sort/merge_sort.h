#ifndef MERGE_SORT_H
#define MERGE_SORT_H
#include <limits>


class MergeSort{

  const int infinity = std::numeric_limits<int>::max();
  void merge(int arr[], int p, int q, int r);

public:

  void sort(int arr[], int p, int r);

};




#endif