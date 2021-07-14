#include<iostream>
using namespace std;

int main() {
    cout<<"Enter the number of set elements : ";
    int n;
    cin>>n;
    int s = 0;
    // cout<<"\nEnter the elements : ";
    // int x;
    srand(time(0));
    for(int i=0;i<n;i++) {
        // cin>>x;
        
        s = s | (1<<rand()%32); 
    }

    cout<<"\nSet elements are : ";
    for(int i=0;i<32;i++) {
        if(s & (1<<i))
            cout<<i<<" "; 
    }
    return 0;
}