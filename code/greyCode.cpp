#include<bits/stdc++.h>
 
using namespace std;
 
vector <string> greyCode(int n) {
    if(n == 0)
        return {"0"};
    if(n == 1) 
        return {"0","1"};
 
    vector<string> rec = greyCode(n-1);
    vector<string> ans;
 
    // for(int i=n-1; i>=0; i--) {
    //     rec.push_back(rec[i]);
    // }
 
    for(int i=0;i<rec.size();i++) {
        string s = rec[i];
        ans.push_back("0" + s);
    }
 
    for(int i=rec.size()-1;i>=0;i--) {
        string s = rec[i];
        ans.push_back("1" + s);
    }
 
    return ans;    
}
 
int main()
{
    int n;
    cin>>n;
    vector<string> s;
    s = greyCode(n);
    for(int i=0;i<s.size();i++) {
        cout<<s[i]<<"\n";
    }
    cout<<"\n";
    return 0;
}