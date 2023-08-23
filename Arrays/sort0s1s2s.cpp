/*                      Sort an array of 0s, 1s and 2s
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
*/
#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
        int l=0;
        int mid=0;
        int h=n-1;
        while(mid<=h){
            if(a[mid]==0){
                swap(a[l],a[mid]);
                l++;
                mid++;
            }else if(a[mid]==1){
                mid++;
            }else{
                swap(a[mid],a[h]);
                
                h--;
            }
        }
}
int main(){
    return 0;
}