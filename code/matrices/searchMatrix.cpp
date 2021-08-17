//O(n)
#include<iostream>
using namespace std;

int a[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

void searchPosition(int n, int item) {
    int i=0,j=n-1;
    while( i<n && j>=0) {
        if(item == a[i][j]) {
            cout<<"Position is row : "<<i+1<<" column : "<<j+1;
            break;
        }
        else if(item > a[i][j]) {
            i++;
        }
        else
            j--;
    }
}

int main() {
    searchPosition(4,10);
    return 0;
}