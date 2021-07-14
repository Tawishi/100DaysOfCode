#include<bits/stdc++.h>

using namespace std;
 
int pos = 0;
const int n = 4;
int col[n] = {0};
int diag1[n] = {0};
int diag2[n] = {0};

// do not enter y > 8
void search(int y){
    if(y == n){
        //cout<<"Counting...\n";
        pos++;
        return;
    }
    for(int i=0;i<n;i++){
        //cout<<"Row "<<i<<endl;
        //"\tif(?)"<<(col[i] || diag1[i+y] || diag2[i-y+n-1])<<endl;
        if(col[i] || diag1[i+y] || diag2[i-y+n-1]){
            //cout<<"Check possible ";
            continue;
        }
        col[i] = diag1[i+y] = diag2[i-y+n-1] = 1;
        //cout<<"Position assigned\n";
        search(y+1);
        col[i] = diag1[i+y] = diag2[i-y+n-1] = 0;
        //cout<<"Ready for next...\n ";
    }
}

int main()
{
    search(0);
    cout<<pos<<endl;
    return 0;
}