#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

bool is_palindrome(int x){
  string str = to_string(x);
  string temp = str;
  reverse(str.begin(),str.end());
  return str == temp;
}

bool has_three_digit_factors(int x){
  for(int i = 100; i<=999; i++){
    if(x% i == 0){
      int temp = x/i;
      temp /= 100;
      if(temp >=1 && temp < 10) return true;
    }
  }
  return false;
}
int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  /*int n;
  while(cin>>n){
      if(is_palindrome(n)) cout<<"true";
  }
  is_palindrome(22);*/
  int total_cases;
  cin>>total_cases;
  for(int i = 1; i <= total_cases; i++){
    int n;
    cin>>n;
    for(int j = n; j>= 101101; j--){
      if(is_palindrome(j)){
        if(has_three_digit_factors(j)){
          cout<<j<<endl;
          break;
        }
      }
    }
  }
  return 0;

}
