// Time compleaxity  = O(nlogn)
// Space complexcity = O(1)

# include<iostream>
# include<algorithm>

using namespace std;

int main() {
    int arr[] = {2,1,3,5,2}, repeat, missing;
    int n = sizeof(arr)/sizeof(arr[0]), count=1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++) {
        if(arr[i] == arr[i+1]) {
            repeat = arr[i];
        }

        if(arr[i]==count)
            count++;
        else {
            missing = count;
            count++;
        }
    }

    if(repeat == 2 && missing == 4)
        cout<<"Passed"<<"\nExpected output : 2 4"<<"\nYour output : "<<repeat<< " "<<missing<<endl;
    else
        cout<<"Failed"<<"\nExpected output : 2 4"<<"\nYour output : "<<repeat<< " "<<missing<<endl;
    return 0;
}