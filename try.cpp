#include<bits/stdc++.h>
using namespace std; 
int main() {
    vector<int> a;
    for(int i=0;i<5;i++) {
        a.emplace_back(i);
    }
    for(int i=0;i<5;i++) {
        cout<<a[i]<<"\n";
    }
    auto it = a.emplace(a.begin()+1,6);
    for(int i=0;i<6;i++) {
        cout<<a[i]<<"\n";
    }
    return 0;
}