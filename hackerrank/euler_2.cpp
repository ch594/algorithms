#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long long> values;
    int test_cases;
    cin >>test_cases;
    for(int i = 0; i < test_cases; i++){
        long long a = 2, b = 8;
        long long n,c, fib = 1;
        cin >>n;
        if(n == 1){
            cout<<1<<endl;
            continue;
        }
        if(n == 2){
            cout<<2<<endl;
            continue;
        }
        else{
            c = 2;
            fib = 8;
            while(fib < n){
                c += (fib%2 == 0? fib : 0);
                fib = a+(4*b);
                cout<<"fib is: "<<fib<<endl;
                cout<<"c is: "<<c<<endl;
                a = b;
                b = fib;    
            }
        }
        cout<<c<<endl;
    }
    return 0;
}