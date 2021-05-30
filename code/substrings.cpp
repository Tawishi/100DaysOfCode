#include<bits/stdc++.h>
using namespace std;

void printSubstring(string s) {
    int len;
    string substring="";
    for(int i=0;i<s.length();i++) {
        substring="";
        for(len=1;len<=s.length()-i;len++)
            // cout<<s.substr(i,len)<<"\n";
            for(int j=i;j<len+i;j++) {
                substring += s[j];
            }
            cout<<substring<<" ";
    }
}

int main() {
    printSubstring("abc");
    return 0;
}