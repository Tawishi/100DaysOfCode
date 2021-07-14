#include<bits/stdc++.h>
using namespace std;

unsigned long long factorial(unsigned long long num){

    if(num<=0)
        return 1;

    return num * factorial(num-1);
}

void nextPermutation(string &s) {
    int k,l;
    vector<string> permutations;
    k = s.length()-2;
    while(k>=0 && s[k]>=s[k+1])
        --k;
    // if(k<=0) {
    //     cout<<"No more permutations.";
    //     exit(0);
    // }
    if(k >= 0) {
        l = s.length()-1;
        while(l>=k && s[k]>=s[l])
            --l;
        swap(s[l],s[k]);
    }
    reverse(s.begin()+k+1,s.end());
    cout<<s<<"\n";
    // permutations.push_back(s);
}

int main() {
    string input;
    cin>>input;
    unsigned long long n = factorial(input.length());
    cout<<n<<endl;
    while(n--) {
        nextPermutation(input);
    }
}