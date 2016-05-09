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
  string test;
  for(int i = 1; i <= total_cases; i++){
    int n;
    cin >>n;
    int fives = n;
    int threes = 0;

    while((fives % 3 != 0 || threes % 5 != 0) && threes <= n){
      fives--;
      threes++;
    }
    if(threes >n ){
      cout<<"-1"<<endl;
      continue;
    } 
    cout<<string(fives,'5')<<string(threes,'3')<<endl;


  }
  return 0;
}
