#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> arr(n);
  vector<int> cuts;
  map<int,int> steps;
  for(int arr_i = 0;arr_i < n;arr_i++){
     cin >> arr[arr_i];
     steps[arr[arr_i]] += 1;
  }
  int size = n;
  //sort(steps.begin(), steps.end());
  for(auto x: steps){
    cout<<size<<endl;
    size -= x.second;
  }
  return 0;
}
