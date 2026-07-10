#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int i = 0;
    int j = s.length() - 1;

    int isPalindrome = true;
    while (true)
    {
        if (i >= j)
        {
            break;
        }

        if (s[i] != s[j])
        {
            isPalindrome = false;
        }

        i++;
        j--;
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