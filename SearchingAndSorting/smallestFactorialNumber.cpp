/*                      Smallest factorial number

Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes.
Example:
    input 
        n = 34
    output
        140
    explaination
        140! have 34 trailing Zeros

    links of the problem
        GFG: https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1
        Leetcode: https://leetcode.com/problems/factorial-trailing-zeroes/

*/

//Aproach1 : brute force
    
/*  steps:
        > first calculate factorial from 1 to while ans is not found
        > now compute trailing zeros 
        > check if zeros == n return that num

*/ 
// Aproach2 : using binary search and 5*2 =10 concept
/*
    let understand this concept first as we know trailing zero can be form by   multiplying 5 and 2 so if we count 5 (because 2 is more then 5 in our factors) so it will tell us about no of trailing zero. 
    consider below code to uderstand how to count trailing zero using this concept.

now run  a binary search algorithm and find our answer.

*/
#include<bits/stdc++.h>
using namespace std;

int calcZero(int x){
        int zeros = 0;
        int denom = 5;
        while(x>=denom){
            zeros += (x/denom);
            denom *=5;
        }
        return zeros;
    }
    int trailingZeros(int n) {
        int low =0, high = n*5, ans = low;
        while(low <= high){
            int mid = (low+high)>>1;
            int zeros = calcZero(mid);
            if(zeros>=n){
                ans= mid;
                high = mid-1;
            }else
                low = mid+1;
        }
    return ans;
}
int  main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<trailingZeros(n)<<endl;
    }
    return 0;
}