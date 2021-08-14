#include<bits/stdc++.h>

using namespace std;

int arr[] = {10, 80, 30, 90, 40, 50, 70};

void merge(int arr[], int low, int high, int mid) {
    int n1=mid-low+1, n2=high-mid;
    int left[n1], right[n2];

    for(int l=0;l<n1;l++)
        left[l] = arr[low+l];

    for(int l=0;l<n2;l++)
        right[l] = arr[mid+1+l];

    int i=0,j=0, k=low;
    while(i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(j < n2) {
        arr[k] = right[j];
        k++;
        j++;
    }

    while(i < n1) {
        arr[k] = left[i];
        k++;
        i++;
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high-low)/2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);

        merge(arr,low,high,mid);
    }
}

int main() {
    int n;
    n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    
    return 0;
}