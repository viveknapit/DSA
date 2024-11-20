#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int query[q];
    for (int i = 0; i < q; i++)
        cin >> query[i];

#pragma region hashing using array
        // int hash[10] = {0};
        // for (int i = 0; i < n; i++)
        //     hash[nums[i]]++;

        // for (int i = 0; i < q; i++)
        //     cout << query[i] << " -> " << hash[query[i]] << endl;
#pragma endregion

#pragma region hashing using unordered_map
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[nums[i]]++;

    for (auto i : hash)
        cout << i.first << " -> " << i.second << endl;

    cout << "query" << endl;
    for (int i = 0; i < q; i++)
        cout << query[i] << " -> " << hash[query[i]] << endl;
#pragma endregion

    return 0;
}