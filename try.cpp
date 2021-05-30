#include<bits/stdc++.h>
using namespace std; 
vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<bool> isPrime(N,1);
        isPrime[0]=isPrime[1]=0;
        for(int i=2;i<=sqrt(N);i++) {
            if(isPrime[i]==1) {
                for(int j=i;i*j<=N;j++)
                    isPrime[i*j] = 0;
            }
        }
        vector<int> primes ;
        for(int i=4;i<=N;i++) {
            if(isPrime[i]==1)
                primes.push_back(i);
        }
        return primes;
    }
int main () {
    int t;
    cin>>t;
    while(t--) {
        int N;
        cin>>N;
        vector<int> n = sieveOfEratosthenes(N);
        for(int i=0;i<sizeof(n);i++)
            cout<<n[i];
    }
    return 0;
}