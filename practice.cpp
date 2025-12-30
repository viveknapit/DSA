#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 20;
    int arr[] = {10};
    arr[0] = 10;
    arr[1] = 12;
    int *pointer = &a;
    cout << &arr[0] << " " << &arr[1] << endl;
    cout << &arr[8] << endl;
    return 0;
}