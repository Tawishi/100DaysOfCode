// O(logn)
// iterative

#include <bits/stdc++.h>
using namespace std;

int get_first(int arr[],int n, int item) {
    int beg=0, end=n-1, mid, first, last;
    //start index
    while(beg<=end) {
        cout<<"1";
        mid = beg  + (end - beg)/2;
        if( (mid==0 || item>arr[mid-1]) && arr[mid] == item)
            return mid;
        else if(arr[mid] < item)
            beg = mid+1;
        else
            end = mid-1;
        }
    return -1;
}

int get_last(int arr[],int n, int item) {
    int beg=0, end=n-1, mid, first, last;
    //end index
    while(beg<=end) {
        cout<<"2";
        mid = beg  + (end - beg)/2;
        if((mid==n-1 || item<arr[mid+1]) && arr[mid] == item)
            return mid;
        else if(arr[mid] > item)
            end = mid-1;
        else
            beg = mid+1;
        }
    return -1;
}
int main() {
    int arr[] = {3,5,6,8,9,9,9,9,9,9,9,12}, c=0, item=9;
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = get_first(arr,n,item);
    int last = get_last(arr,n,item);
    cout<<last<<endl;
    cout<<first<<endl;
    c = last - first + 1;
    cout<<c<<endl;

    if(c==count(arr,arr+n,item))
        cout<<"Passed "<<"\nExpected output  : 7"<<"\nYour output : "<<c;
    else
        cout<<"Failed "<<"\nExpected output  : 7"<<"\nYour output : "<<c;
    return 0;
}