#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N][N];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++)
            cin>>arr[i][j];
    }

    int k=0,l=0,m=N,n=N;

    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    while( k<m && l<n) {
        // top row
        for(int i=l;i<n;i++) {
            cout<<arr[k][i]<<" ";
        }
        k++;

        // right col
        for(int i=k;i<m;i++) {
            cout<<arr[i][n-1]<<" ";
        }
        n--;
        // bottom row
        if(k<m) {
            for(int i=n-1;i>=l;i--){
                cout<<arr[m-1][i]<<" ";
            }
            m--;
        }

        // left col
        if(l<n) {
            for(int i=m-1;i>=k;i--){
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
    }

    return 0;
}