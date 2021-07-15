// Time compleaxity  = O(n)
// Space complexcity = O(n)

# include<iostream>
# include<algorithm>

using namespace std;

int main() {
    int arr[] = {2,1,3,5,2}, repeat, missing;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int count[n] = {0};
    for(int i=0;i<n;i++) {
        count[arr[i]]++;
    }

    for(int i=0;i<n;i++) {
        if(count[i] == 0)
            missing = i;
        if(count[i] == 2)
            repeat = i; 
    }

    if(repeat == 2 && missing == 4)
        cout<<"Passed"<<"\nExpected output : 2 4"<<"\nYour output : "<<repeat<< " "<<missing<<endl;
    else
        cout<<"Failed"<<"\nExpected output : 2 4"<<"\nYour output : "<<repeat<< " "<<missing<<endl;
    return 0;
}