#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Eneter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    int l,r, sum;
    cout<<"Enter the sum range (lower and upper, starting at 0): ";
    cin>>l>>r;
    if(l==0)
        sum = prefixSum[r];
    else
        sum = prefixSum[r] - prefixSum[l-1];

    cout<<"Sum is "<<sum<<endl;
    return 0;
}