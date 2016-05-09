#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test_cases;
    cin >> test_cases;
    for(int i = 0; i < test_cases; i++){
        int n;
        cin >> n;
        int n_3 = (n-1)/3;
        cout<<"3 is: "<<n_3<<endl;
        int n_5 = (n-1)/5;
        cout<<"5 is: "<<n_5<<endl;
        long long sum = (3*(n_3)*(n_3+ 1))/2 + (5*(n_5)*(n_5 +1))/2;
        cout<<sum<<endl;
    }


    return 0;
}
