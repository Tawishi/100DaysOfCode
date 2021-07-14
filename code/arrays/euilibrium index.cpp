#include<iostream>
using namespace std;

 int main() {
     int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array : ";
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"sum = "<<sum<<"\n";
    int lsum=0,l=0, index=-1;
    for(int i=0;i<n;i++) {
        sum -= arr[i];
        if(lsum == sum) {
            index = i;
            break;
        }
        lsum += arr[i];
    }
    cout<<"Equilibrium index is "<<index<<endl;
    return 0;
 }