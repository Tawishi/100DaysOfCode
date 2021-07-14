#include<iostream>
#include<algorithm>
using namespace std;

int search(int b, int e, int x, int arr[]) {

    if(b<=e) {
        int mid1 = b  + (e-b)/3;
        int mid2 = e  - (e-b)/3;

        if(arr[mid1] == x) {
            return mid1;
        }

        if(arr[mid2] == x) {
            return mid2;
        }

        if(arr[mid1] > x) {
            search(b,mid1-1,x,arr);
        }

        else if(arr[mid2] < x) {
            search(mid2+1,e,x,arr);
        }

        else {
            search(mid1+1,mid2-1,x,arr);
        }
    }
    return -1;
}

int main() {
    int n, item;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"\nEnter array : ";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter element to be searched : ";
    cin>>item;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i];
    int index = search(0,n-1,item,arr);
    if(index == -1)
        cout<<"\nNot found !";
    else
        cout<<"\nIndex location is " <<index;
    return 0;
}