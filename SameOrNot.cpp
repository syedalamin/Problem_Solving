#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    list<int> l2;

    int val1;
    int val2;

    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        l1.push_back(val1);
    }

    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        l2.push_back(val2);
    }

    int sz1 = l1.size();
    int sz2 = l2.size();

    // cout << sz1 << " " << sz2;

    bool flag = true;

    if (sz1 == sz2)
    {

        auto it1 = l1.begin();
        auto it2 = l2.begin();

        while (it1 != l1.end())
        {
            int val_1 = *it1;
            int val_2 = *it2;

            if (val_1 != val_2)
            {
                flag = false;
                break;
            }
            it1++;
            it2++;
        }
    }
    else
    {
        flag = false;
    }

    if (flag)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}