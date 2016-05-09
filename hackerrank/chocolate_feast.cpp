#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  for(int a0 = 0; a0 < t; a0++){
      int n; //total money
      int c; //cost of each chocolate
      int m; //after m one free
      cin >> n >> c >> m;
      int extra_wrappers = ((n/c))/m; //extra choclate he gets
      int wrappers = n/c;
      while(wrappers >= m){
        extra_wrappers += (wrappers/m + wrappers%m)/m;
        wrappers /= m;
      }
      cout<< (n/c) + extra_wrappers <<endl;
  }
  return 0;
}
