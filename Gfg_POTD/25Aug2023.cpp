/*                   Palindrome String
Given a string S, check if it is palindrome or not.

Example 1:
    Input: S = "abba"
    Output: 1


    Explanation: S is a palindrome
*/

#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string S){
	    string r = "";
	    for(int i=S.size()-1;i>=0;i--)
	        r += S[i];
	   
	   if(r==S)
	        return 1;
	        return  0;
}

int main(){
    string s;
    cin>>s;
    if(isPalindrome(s))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return  0;
}