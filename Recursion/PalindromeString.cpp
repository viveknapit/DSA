#include <iostream>

using namespace std;

bool isPalindrome(string str, int i)
{
    int n = str.size();
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
        return false;
    isPalindrome(str, i + 1);
}

int main()
{
    string str;
    cin >> str;
    if (isPalindrome(str, 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}