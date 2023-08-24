/*                      Count Inversion
given an array v , find the inversion count of that array.
inversion count means how far the array is from being sorted.
example: 
    input:
        2 5 6 3 9
    output:
        1

    GFG Link : https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
    Leetcode (similar) : https://leetcode.com/problems/global-and-local-inversions/

*/
#include<bits/stdc++.h>
using namespace std;

int bruteForce(long long int arr[], int n){
        long long int ans=0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(arr[i]>arr[j])
                    ans++;
            }
        }
        return ans;
}
int main(){
    return 0;
}