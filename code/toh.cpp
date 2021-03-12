#include<bits/stdc++.h>

using namespace std;

void toh(int n, int from, int to, int aux) {
    if(n == 1) {
        cout<<from<<" "<<to<<"\n";
        return;
    }

    toh(n-1, from, aux, to);
    
    vector <int> A;

    cout<<from<<" "<<to<<"\n";

    toh(n-1, aux, to, from);

}

int main()
{
    int n;
    cin>>n;
    cout<<pow(2,n) - 1<<"\n";
    toh(n,1,3,2);
    return 0;
}