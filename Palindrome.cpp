#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        l.push_back(val);
    }

    auto i = l.begin();
    auto j = l.end();
    j--;

    bool isPalindrome = true;

    auto sz = l.size();
    int count = 0;

    while (count < sz / 2)
    {

        if (*i != *j)
        {
            isPalindrome = false;
            break;
        }


        count++;
        i++;
        j--;
    }

    if (isPalindrome)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}