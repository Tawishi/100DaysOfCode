#include<bits/stdc++.h>

using namespace std;

void func(int n) {
    cout<<(n&1)<<"\t";
    if(n == 0) {
        cout<<"Zero is neither even nor odd\n";
        return;
    }
    if( (n&1) == 0) {
        cout<<"Even\n";
    }
    else
        cout<<"Odd\n";
}

int main()
{
    int n;
    cin>>n;
    func(n);
    return 0;
}