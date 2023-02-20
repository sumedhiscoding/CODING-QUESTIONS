//precomputed prime sieve
//make a vector of int containing all the primes 1....root(n)
//iterate over segment m.....n and start marking multiples of primes in vector
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll range=100000;
//optimised prime sieve code
vector <int> primesieve(int p[]){// so basically to check if prime check p[no]=1 if yes then prime else no
    //create a vector we need to return containing all the primes we found between 1...root(n)
    vector <int> primes;
    //handling the base cases
    p[0]=p[1]=0;
    p[2]=1;
//mark all odd as primes
    for (long long i = 3; i <=range ; i+=2) {
        p[i]=1;
    }
    //
    for (long long j = 3; j <=range ; j+=2) {
        if(p[j]==1)
        {
            for (long long i = j*j; i <=range ; i=i+2*j) {
                p[i]=0;
            }
        }
    }
    //start pushing all the primes
    primes.push_back(2);
    for (int k = 3; k <=range ; k+=2) {
        if(p[k]==1)
        primes.push_back(k);
    }
    return primes;
}
 
 
int main(){
    int p[range+1];
    int n_minus_m[range+1];
 
    int t;
    cin>>t;
    while (t--){
        ll n;
        ll m;
        cin>>m>>n;
        vector <int > primes=primesieve(p);
        for (int j = 0; j <=range ; ++j) {
            n_minus_m[j]=0;
        }
       //here segmented sieve logic
       for (auto x :primes ) {
           if(x*x>n){
               break;
           }
           ll start = (m / x) * x;
           if(x>=m and x<=n){
               start = 2*x;
           }
               //mark all multiples of x in the range start to n as not primes
               for (ll i = start; i <= n; i += x) {
                   n_minus_m[i - m] = 1;//1 is non prime in n_minus_m array and 0 is prime
               }
 
 
     }
       //loop over the range m....n and print the primes
        for (long long i = m; i <=n ; ++i) {
            if(n_minus_m[i-m]==0 and i!=1){
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
 
 
    return 0;
 
 
 
} 