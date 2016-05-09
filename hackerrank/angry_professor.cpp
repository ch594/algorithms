#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int total_cases;;
    cin >> total_cases;
    string test;
    for(int i = 1; i <= total_cases; i++){
      int n,k;
      cin >>n;
      cin>>k;
      int total_on_time = 0;
      for(int j = 0; j < n; j++){
        int temp;
        cin >> temp;
        total_on_time += (temp <= 0? 1: 0);
      }
      //cout<<total_on_time<<endl;
      cout<<( total_on_time < k?"YES": "NO")<<endl;


    }
    return 0;
}
