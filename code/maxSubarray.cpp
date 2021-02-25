#include<bits/stdc++.h>

using namespace std;

vector<int> maxset(vector<int> &A) {
    long long sum=0,ans = INT_MIN;
    vector<int>a, b;
    for(auto i:A){  //for i in A
        if(i<0){
            sum=0, b.clear();
            continue;
        }
        sum+=i;
        b.emplace_back(i);
        if(ans<sum or (ans==sum and a.size()<b.size())){
            ans=sum;
            a = b;
        }
    }
    return a;
}

int main()
{
    vector<int> sol;
    vector<int> A;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int x;
    cout<<"Enter array : \n";

    // int i=0;
    // while(--n) {
    //     cin>>A[i++];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<"Coming in...\n";
    //     cin>>A[i];
    //     cout<<"Going out...\n";
    // }
    
    sol = maxset(A);
    for(int i=0;i<sol.size();i++)
        cout<<sol[i];
    return 0;
}