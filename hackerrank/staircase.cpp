#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    string test;
    for(int i = 1, k = 5; k> 0 && i < 6; i++, k-- ){
        for(int s = 0; s < k; s++)cout<<" ";
        for(int s = 0; s < i; s++) cout<<"#";
        cout<<endl;
    }
    return 0;
}
