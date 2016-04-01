#include <iostream>
#include <string>
#include <vector>
#include "insertion_sort.h"

using namespace std;
int main(int argc, char const *argv[])
{
  InsertionSort alg;
  vector<int> inputs; //user input int array
  if(argc > 1 && string(argv[1]) == "-i"){
    cout<<"Enter integer array: ";
    int input;
    while(cin>> input) inputs.push_back(input);
    alg.sort(inputs, inputs.size());
    for(auto i: inputs) cout<<i<<" ";
    cout<<endl;
  } 

  else{
    int test1[] = {4,2,6,1,12,10};
    cout<<"Test 1 array:        ";
    for(auto i:test1)cout <<i<<" ";
    cout <<endl;
    alg.sort(test1,6);
    cout<<"Test 1 sorted array: ";
    for(auto i:test1)cout <<i<<" ";
    cout << endl; 
  }
  return 0;
}