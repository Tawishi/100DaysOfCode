#include<iostream>
using namespace std;

int findPeak(int arr[], int n, int beg, int end) {
    int mid;
    if(beg<=end) {
        mid = beg + (end - beg)/2 ;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
            return arr[mid];
        else if(mid>0 && arr[mid-1]>arr[mid])
            return findPeak(arr,n,beg,mid-1);
        else
            return findPeak(arr,n,mid+1,end);
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 15, 2, 23, 90, 67};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    x = findPeak(arr,n,0,n-1);

    if(x == 20)
        cout<<"Passed"<<"\nExpected output : 90"<<"\nYour output : "<<x<<endl;
    else
        cout<<"Failed"<<"\nExpected output : 90"<<"\nYour output : "<<x<<endl;

    int arr1[] = {10,20,30,40};
    n = sizeof(arr1)/sizeof(arr1[0]);

    x = findPeak(arr1,n,0,n-1);

    if(x == 40)
        cout<<"Passed"<<"\nExpected output : 40"<<"\nYour output : "<<x<<endl;
    else
        cout<<"Failed"<<"\nExpected output : 40"<<"\nYour output : "<<x<<endl;

    return 0;
}