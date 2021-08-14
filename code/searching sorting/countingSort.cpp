#include<bits/stdc++.h>
using namespace std;
# define RANGE 10

int arr[] = {1,8,3,7,4,5,7};

void countingSort(int arr[], int n) {
    int count[RANGE] = {0};
    int result[n];
    for(int i=0;i<n;i++)
        count[arr[i]]++;

    for(int i=1;i<RANGE;i++)
        count[i] += count[i-1];
    
    for(int i=0;i<n;i++) {
        result[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<n;i++)
        arr[i] = result[i];

}

int main() {
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    
    countingSort(arr, n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}