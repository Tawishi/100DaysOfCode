#include<bits/stdc++.h>

using namespace std;

int maxset(int A[], int n) {
    long long sum=0,ans = INT_MIN;
    int l=0,r=0;
    for(int i=0;i<n;i++){  //for i in A
        sum+=A[i];
        if(sum>ans){
            ans = sum;
            r = i;
            // a = b;
        }
        if(sum<0){
            sum=0;
            l=r=i+1;
        }
    }
    // cout<<l<<" "<<r;
    cout<<"subarray is ";
    for(int i=l;i<=r;i++) {
        cout<<A[i]<<" ";
    }
    return sum;
}

int main()
{
    int sol;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int x, A[n];;
    cout<<"Enter array : \n";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }    
    sol = maxset(A,n);
    cout<<"\nsum is "<<sol<<endl;
    return 0;
}