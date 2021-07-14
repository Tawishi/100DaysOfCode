#include<iostream>
using namespace std;
// Input1 3 4 6 ; 2 5 7 8
// Output1 2 3 4 5 6 7 8
void mergeSorted(int arr1[],int arr2[],int m, int n) {
    int arr3[m+n];
    int i=0,j=0,k=0;
    while(i < m && j < n) {
        if(arr1[i] <arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else
            arr3[k++] = arr2[j++];
    }
    while(i<m)
        arr3[k++] = arr1[i++];
    while(j<n)
        arr3[k++] = arr2[j++];

    for(int x =0;x<n+m;x++) {
        cout<<arr3[x]<<" ";
    }
}
int main() {
    int arr1[] = {3, 4, 6};
    int arr2[] = {2 ,5, 7 ,8};
    int m=3,n=4;
    mergeSorted(arr1,arr2,m,n);

    return 0;
}