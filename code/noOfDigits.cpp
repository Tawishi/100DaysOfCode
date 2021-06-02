
#include<bits/stdc++.h>
using namespace std;
int digitsInFactorial(int N)
    {
        // code here
        double x;
        for(auto i=2;i<=N;i++) {
            cout<<log10(i)<<"\n";
            x += log10(i);
            cout<<x<<"\n";
        }
        return floor(x) + 1;
    }
int main() {
    int N;
    cin>>N;
    cout<<digitsInFactorial(N);
    return 0;
}