#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
  int total_cases;;
  cin >> total_cases;
  for(int i = 1; i <= total_cases; i++){
    int n;
    cin >>n;
    int n_copy = n;
    int count = 0;
    while(n!=0){
      int temp = n % 10;
      if(temp != 0 && n_copy % temp == 0) count++;
      n /= 10;
    }
    cout<<count<<endl;


  }
  return 0;
}
