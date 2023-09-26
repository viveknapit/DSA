// User function template for C++

// User function template for C++
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        vector<vector<int>>ans;
      if(nums.size()<4)
            return ans;
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-3;i++){
          if(i>0 and nums[i] == nums[i-1])
            continue;
          for(int j=i+1;j<nums.size()-2;j++){
              if(j>i+1 and nums[j] == nums[j-1])
                    continue;
              int  temp = target - (nums[i]+nums[j]);
              int l=j+1, m= nums.size()-1;
              while(l<m){
                  if(nums[l]+nums[m] == temp){
                      vector<int>temp = {nums[i],nums[j],nums[l],nums[m]};
                            ans.push_back(temp);
                            while(l<m and nums[l]==nums[l+1])
                                l++;
                            while(l< m and nums[m]==nums[m-1])
                                m--;   
                            l++; m--;
                  }else if(nums[l]+nums[m] < temp)
                        l++;
                    else
                        m--;
              }
          }
      }
      return ans;
    }
};

int  main(){
    int t; cin>>t;
    while(t--){
        int n, m, i; cin>>n>>m;
        vector<int>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<vector<int>> ans = obj.fourSum(a,m);
        for(auto &v:ans){
           for(int &u:v){
            cout<<u<<" ";
            }
            cout<<"$";
        }
        if(ans.empty())
            cout<<-1<<endl;
        
    }
    return 0;
}