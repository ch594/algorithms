#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void replace_nth(int &x, int n){
  string str = to_string(x);


}

int main(){
  int total_cases;;
  cin >> total_cases;
  for(int i = 1; i <= total_cases; i++){
    int n;
    cin >>n;
    long long ans = (n % 2 == 0)? (pow(2,n/2 + 1) - 1): (pow(2,n/2 + 2) - 2);
    cout<<ans<<endl;


  }
  return 0;
}
