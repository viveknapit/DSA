#include <iostream>
#include <vector>

using namespace std;

#pragma region two pointer approch
void reverseArray(vector<int> &arr, int s, int e)
{
    cout << s << " " << e << endl;
    if (s >= e)
        return;

    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    reverseArray(arr, s + 1, e - 1);
}
#pragma endregion

#pragma region optimised approch
void reverseArray(vector<int> &arr, int i)
{
    int n = arr.size() - 1;
    if (i >= (n / 2) + 1)
        return;
    int temp = arr[i];
    arr[i] = arr[n - i];
    arr[n - i] = temp;
    reverseArray(arr, i + 1);
}
#pragma endregion

#pragma region Main method
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    reverseArray(arr, 0);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
#pragma endregion