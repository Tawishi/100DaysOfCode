#include<bits/stdc++.h>

using namespace std;

void primeList(int A) {
    vector<int> b(A,1);

    b[0] = b[1] = 0;

    for(int i=2;i<=sqrt(A);i++) {
        if(b[i]==1) {
            for(int j=i;i*j<=A;i++) {
                b[i*j] = 0;
            }
        }
    }
    for(int i=0;i<=A;i++) {
        if(b[i]==1)
            cout<<i<<" ";
    }
}

int main()
{
    cout<<"Enter number : ";
    int n;
    cin>>n;
    primeList(n);
    return 0;
}