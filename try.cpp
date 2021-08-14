//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
        int i=0,j=0, count;
        count = (n + m)/2;
        cout<<count<< "\n" ;
        while(count && i<n && j<m) {
            cout<<count<< "\n" ;
            if(arr[i] <= brr[j]) {
                i++;
            }
            else if(arr[i] > brr[j]) {
                j++;
            }
           count--; 
        }
        cout<<"End count: "<<count<< "\n" ;
        // while(count-- && i < n) {
        //     i++;
        // }
        // while(count-- && j < m) {
        //     j++;
        // }
        return min(arr[i],brr[j]);
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}  // } Driver Code Ends