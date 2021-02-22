#include<bits/stdc++.h>

using namespace std;

void convert(int x) {
    int n = (int)log2(x);
    for(int k=n;k>=0;k--) {
        if(x & 1<<k)
            cout<<"1";
        else
            cout<<"0";
    }
}

int main()
{
    int x;
    cout<<"Enter number : ";
    cin>>x;
    convert(x);
    return 0;
}