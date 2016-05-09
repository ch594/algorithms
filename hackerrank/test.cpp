#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

bool is_palindrome(int x){
  string str = to_string(x);
  string temp = str;
  reverse(str.begin(),str.end());
  return str == temp;
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
    bool found = false;
    int count = 0;
    for(int j = 999; j>= 100; j--){
      for(int k = 999; k >= 100; k--){
        //cout<<"count: "<<count<<endl;
        long test = j*k;
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;

}
