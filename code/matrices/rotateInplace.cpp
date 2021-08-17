#include<bits/stdc++.h>
using namespace std;

int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

void rotatingInplace(int n) {

    for(int i=0;i<n/2;i++) {
        for(int j=i;j<n-i-1;j++) {

            int temp = arr[i][j];
            arr[i][j] = arr[j][n-i-1];
            arr[j][n-i-1] = arr[n-i-1][n-j-1];
            arr[n-i-1][n-j-1] = arr[n-1-j][i];
            arr[n-1-j][i] = temp;
            //j --> n-i-1 --> n-1-j --> i
        }     
    }
}

int main() {
    
    rotatingInplace(4);
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}