#include<bits/stdc++.h>

using namespace std;

vector<int> set;
int n=3;

int search(int k) {
    if(k == n+1) {
        for(int i=0; i < set.size(); i++)
            cout << set.at(i) << ' ';
        return;
    }
    set.push_back(k);
    search(k+1);
    set.pop_back();
    search(k+1);
}

int main() {
    search(1);
    return 0;
}