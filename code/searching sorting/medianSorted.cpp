//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int findMedian(int arr[], int n, int brr[], int m)
    {
        int m1=-1,m2=-1, count;
        int i=0,j=0;
        if((n + m)%2 == 1) {
            for(count=0;count<=(n+m)/2;count++) {
                if(i!=n && j!=m) {
                    m1 = arr[i] < brr[j] ? arr[i++] : brr[j++] ;
                }
                else if( i < n)
                    m1 = arr[i++];
                else
                    m1 = brr[j++];
            }
            return m1;
        }
        else {
            for(count=0;count<=(n+m)/2;count++) {
                m2 = m1;
                if(i !=n && j !=m) {
                    m1 = arr[i] < brr[j] ? arr[i++] : brr[j++] ;
                }
                else if( i < n)
                    m1 = arr[i++];
                else
                    m1 = brr[j++];
            }  
        }
        return (m1 + m2) / 2;
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