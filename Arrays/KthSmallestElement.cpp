#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> p;
        for(int i=0;i<=r;i++){
            p.push(arr[i]);
        }
        int ans;
        while(r-k>=0){
            p.pop();
            k++;
        }
        ans = p.top();
        
        return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int l;
        cin>>l;
        cout<<kthSmallest(arr, 0, n-1,l)<<endl;
    }
    return 0;
}