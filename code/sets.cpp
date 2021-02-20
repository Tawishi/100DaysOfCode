#include<bits/stdc++.h>

using namespace std;

vector<int> subset;
int n=3;

void search(int k) {
    if(k == n+1) {
        for(int i=0; i < subset.size(); i++)
            cout << subset.at(i) << ' ';
            cout<<endl;
        return;
    }
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
    search(k+1);
}

int main() {
    search(1);
    return 0;
}