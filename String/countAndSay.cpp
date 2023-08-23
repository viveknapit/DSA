#include<bits/stdc++.h>
using namespace std;


string countAndSay(int n) {
        //base case
        if(n==1)
            return "1";
        // recursion
        string s = countAndSay(n-1);

        //logic
        int cnt=0;
        string ans ="";
        for(int i=0;i<s.size();i++){
            cnt++;
            if(i==s.size()-1 or s[i]!= s[i+1]){
                ans += to_string(cnt);
                ans += s[i];
                cnt =0;
            }
        }
        return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<countAndSay(n)<<endl;
    }
    return 0;
}