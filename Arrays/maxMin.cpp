/*                              Max Min
 Statement : Given an array A of size N of integers. Your task is to find the sum of 
 minimum and maximum element in the array. 
 
 */ 
#include<bits/stdc++.h>
using namespace std;

int findSum(int A[], int N)
    {
    	int mi=INT_MAX, mx = INT_MIN;  
    	for(int i=0;i<N;i++){
    	    mi = min(mi, A[i]);
    	    mx = max(mx, A[i]);
    	} 
    	return mi+mx;
    }

int main(){
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];

	    int ans=findSum(arr, n);
	    cout<<ans<<endl;
	}
    return 0;
}

