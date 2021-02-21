#include<bits/stdc++.h>

using namespace std;

vector<int> permutation;
int n=3;
bool chosen[n+1] = {false};

void search() {
    if(permutation.size() == n) {
        for(int i=0; i < permutation.size(); i++)
            cout << permutation.at(i) << ' ';
            cout<<endl;
        return;
    }
    else {
        for(int i=1 ; i<=n ; i++) {
            if(chosen[i])
                continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main() {
    search();
    return 0;
}