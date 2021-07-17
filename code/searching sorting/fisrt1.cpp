#include<iostream>

using namespace std;

int getFirst(int arr[],int n) {
    int beg=0, end=n-1,mid;
    while(beg<=end) {
        mid = beg + (end-beg)/2; //works for both 0 and 1 based indexing
        if(arr[mid] == 1 && (mid==0 || arr[mid-1]==0))
            return mid;
        else if(arr[mid] == 1)
            end = mid-1;
        else
            beg = mid+1; 
    }
    return -1;
}

int main() {
    int arr[] = {0,0,0,0,0,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = getFirst(arr,n);

    if(x == 5)
        cout<<"Passed"<<"\nExpected output : 5"<<"\nYour output : "<<x<<endl;
    else
        cout<<"Failed"<<"\nExpected output : 5"<<"\nYour output : "<<x<<endl;

    int arr2[] = {0,0,0,0,0};
    n = sizeof(arr2)/sizeof(arr2[0]);

    x = getFirst(arr2,n);

    if(x == -1)
        cout<<"Passed"<<"\nExpected output : -1"<<"\nYour output : "<<x<<endl;
    else
        cout<<"Failed"<<"\nExpected output : -1"<<"\nYour output : "<<x<<endl;

    int arr1[] = {0,0,0,1,1,1};
    n = sizeof(arr1)/sizeof(arr1[0]);

    x = getFirst(arr1,n);

    if(x == 3)
        cout<<"Passed"<<"\nExpected output : 3"<<"\nYour output : "<<x<<endl;
    else
        cout<<"Failed"<<"\nExpected output : 3"<<"\nYour output : "<<x<<endl;

    return 0;
}