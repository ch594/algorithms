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
    long long a,b;
    cin >>a>>b;
    int a_sqrt = sqrt(a);
    int b_sqrt = sqrt(b);
    //int count = 0;
    //for(long long i = a_sqrt; i <= b_sqrt; i++){
      //if(i * i >= a && i *i <= b) count++;

    //}
    cout<< b_sqrt - a_sqrt + 1 << endl;

  }
  return 0;
}
