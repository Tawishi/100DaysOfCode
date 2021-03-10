#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter board dimensions: ";
    cin>>n;
    int ans;
    ans = ( pow(n,4)/2 ) - ( (5*pow(n,3))/3 ) + ( 3*(pow(n,2))/2 ) - n/3 ;
    cout<<ans<<"\n";
    return 0;
}