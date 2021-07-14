#include<bits/stdc++.h>

using namespace std;

void createStrings(string str) {
    sort(str.begin(),str.end());
    vector<string> s;
    do {
        s.push_back(str);
    }while(next_permutation(str.begin(),str.end()));
    cout<<s.size()<<"\n";

    for(string y : s) {
        cout<<y<<"\n";
    }

}

int main()
{
    string x;
    cin>>x;
    createStrings(x);
    return 0;
}