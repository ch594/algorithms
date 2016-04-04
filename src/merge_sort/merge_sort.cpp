#include "merge_sort.h"


void MergeSort::merge(int arr[], int p, int q, int r){ //p,q, and r indices st. p <= q < r
  int n1 = q - p + 1; // number of elements in left array
  int n2 = r -q;  // number of elements in right array
  int *Left = new int[n1 + 1];
  int *Right = new int[n2 + 1];

  for (int i = 0; i < n1; i++) Left[i] = arr[p+ i];

  for(int j = 0; j < n2; j++) Right[j] = arr[q + j + 1];

  Left[n1] = infinity;
  Right[n2] = infinity;

  //int i = 0;
  //int j = 0;
  for(int k = p, i = 0, j = 0; k <= r; k++){
    if(Left[i] <= Right[j]){ //figure out which subarray has smaller element to merge
      arr[k] = Left[i];
      i++;
    }
    else{
      arr[k] = Right[j];
      j++;
    }
  }

  delete[] Left;
  delete[] Right;

}

void MergeSort::sort(int arr[], int p, int r){
  if(p < r){
    int q = (p+r)/2;
    sort(arr,p,q);
    sort(arr,q+1,r);
    merge(arr,p,q,r);
  }

}