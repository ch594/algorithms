#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


bool is_prime(long long val){
    for(int i = 2; i < sqrt(val + 1); i++){
      if(val % i == 0){
        return false;
      }
    }
  return true; 
}

void gen_primes(long long n, unordered_set<long long> &primes){
    if(n>= 2){
        primes.insert(2);
        for(long long i = 3; i <=n; i += 2){
            if(is_prime(i)) primes.insert(i);
        }
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unordered_set<long long> values;
    //gen_primes(10000000,values);
    int test_cases;
    cin >>test_cases;
    for(int i = 1; i <= test_cases; i++){
        long long largest_factor = 2;
        long long n;
        cin >> n;
        long long x = sqrt(n);
        //if(n % 2 == 0){
          //  cout <<2<<endl;
           // continue;
      //  }
        for(long long j = 2; j <= x; j++){
            if(n % j != 0) continue;
            if(is_prime(j)){
                //cout<<j<<endl;
                while( n %j == 0){
                    n = n/j;
                    x = sqrt(n);
                    largest_factor = j;
                }
                //n = n/j;
                //x = sqrt(n);
                //cout<<"x is: "<<x<<endl;
            }
        }
        n = (n>largest_factor)?n:largest_factor;
        cout<<n<<endl;
    }
    return 0;
}