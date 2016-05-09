#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main(){
  int n; 
  int k; 
  cin >> n >> k;
  int count = 0;
  int page_number = 0;
  for(int i = 0; i < n; i++){
    int problems;
    cin>>problems;
    int min = 1;
    int max = (k< problems)?k: problems ;
    for(int p = 1; problems > 0; p++){
      page_number++;
      problems -= k;
      if(page_number>=min && page_number <= max) count++;
      //cout<<page_number<<endl;
      //cout<<"chapter: "<<i + 1<<" problems: "<<problems<<endl;
      //cout<<"problem min is: "<<min<<" problem max is: "<<max<<endl;
      //cout<<"count: "<<count<<endl;
      min += k;
      max += (k< problems)?k: problems;
    }
  }
  cout<<count<<endl;
  return 0;
}
