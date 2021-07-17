// Time compleaxity  = O(n)
// Space complexcity = O(1)

# include<iostream>
# include<algorithm>

using namespace std;

int main() {
    int arr[] = {2,1,3,5,2}, repeat, missing;
    int n = sizeof(arr)/sizeof(arr[0]), temp;
    sort(arr,arr+n);
    for(int i=0;i<n;i++) {
        temp = arr[abs(arr[i])-1];
        if(temp < 0) {
            repeat = arr[i];
            break;
        }
        arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
    }

    // for(int i=0;i<n;i++) 
    //     cout<<arr[i]<<" ";
    
    // cout<<"\n";

    for(int i=0;i<n;i++) {
        // cout<<arr[i]<<" ";
        if(arr[i] > 0 && arr[i]!= repeat) {
        // cout<<"\n"<<arr[i]<<" ";
            missing = i + 1;
            break;
        }
    }


    if(repeat == 2 && missing == 4)
        cout<<"Passed"<<"\nExpected output : 2 4"<<"\nYour output : "<<repeat<< " "<<missing<<endl;
    else
        cout<<"Failed"<<"\nExpected output : 2 4"<<"\nYour output : "<<repeat<< " "<<missing<<endl;
    return 0;
}