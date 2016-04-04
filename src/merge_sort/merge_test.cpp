#include <iostream>
#include <string>
#include <vector>
#include "merge_sort.h"
#include <limits>

using namespace std;
int main(int argc, char const *argv[])
{
  /*MergeSort alg;
  vector<int> inputs; //user input int array
  if(argc > 1 && string(argv[1]) == "-i"){
    cout<<"Enter integer array: ";
    int input;
    while(cin>> input) inputs.push_back(input);
    alg.sort(inputs, inputs.size());
    for(auto i: inputs) cout<<i<<" ";
    cout<<endl;
  } */


  MergeSort alg;
  int test1[] = {4,2,6,1,12,10};
    cout<<"Test 1 array:        ";
    for(auto i:test1)cout <<i<<" ";
    cout <<endl;
    alg.sort(test1,0, 6);
    cout<<"Test 1 sorted array: ";
    for(auto i:test1)cout <<i<<" ";
    cout << endl; 

  cout <<numeric_limits<string>::max()<<endl;
  return 0;
}