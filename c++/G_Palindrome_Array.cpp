#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;

    bool isPalindrome = true;

    while (true)
    {
        if (left > right)
        {
            break;
        }

        if (arr[right] != arr[left])
        {
            isPalindrome = false;
        }

        left++;
        right--;
    }

    if (isPalindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}