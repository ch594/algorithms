#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H


class InsertionSort{
public:
  template<typename T>
  void sort(T &arr, int n);
};

template <typename T>
void InsertionSort::sort(T &arr, int n){
  for(int i =1; i < n; i++){
    int key = arr[i];
    int left = i - 1;
    while (left >= 0 && arr[left] > key){
      arr[left + 1] = arr[left];
      left--;
    }
    arr[left + 1] = key;
  }
  return;
}






#endif