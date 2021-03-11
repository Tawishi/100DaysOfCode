#include<bits/stdc++.h>

using namespace std;

vector <string> geryCode(int n) {
    if(n == 0)
        return {"0"};
    if(n == 1) 
        return {"1","0"};

    vector<string> rev;
    vector<string> ans;

    for(int i=n-1; i<=0; i++) {
        rev.push_back(rev[i]);
    }

    for(int i=0;i<n;i++) {
        ans.push_back('0' + rev[i]);
    }

    for(int i=n;i<2*n;i++) {
        ans.push_back('1' + rev[i]);
    }

    return ans;    
}

int main()
{
    int n;
    cin>>n;
    vector<string> s;
    s = geryCode(n);
    for(int i=0;i<2*n;i++) {
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    return 0;
}