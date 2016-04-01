#include "insertion_sort.h"

/*template <typename T>
void InsertionSort::sort(T *arr, int n){
  for(int i =1; i < n; i++){
    int key = arr[i];
    int left = i - 1;
    while (arr[left] > key && left >= 0){
      arr[left-- +1] = arr[left--];
    }
    arr[left + 1] = key;
  }
  return;
}*/