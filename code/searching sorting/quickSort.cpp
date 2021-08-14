#include<bits/stdc++.h>
using namespace std;

int arr[] = {10, 80, 30, 90, 40, 50, 70};

int partition(int arr[], int low, int high) {
    int pivot=arr[high], i=low-1, j;

    // get pivot to right place
    for(j=low;j<=high-1;j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);

    return i+1;
}

// low, high are indices
void quicksort(int arr[], int low, int high) {
    int pivot_pos;

    if(low < high){

        pivot_pos = partition(arr, low, high);

        quicksort(arr, low, pivot_pos-1);
        quicksort(arr,pivot_pos+1,high);
    }

}


int main() {
    int n;
    n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}