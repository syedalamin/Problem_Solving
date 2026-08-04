#include <bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin >> q;

    list<int> l;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        bool flag = true;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == l.size())
        {
            l.push_back(v);
        }
        else if (x > l.size())
        {
            flag = false;
        }
        else
        {
            l.insert(next(l.begin(), x), v);
        }

        if (flag)
        {

            for (auto val : l)
            {
                cout << val << " ";
            }
            cout << "\n";

            list<int> temp(l);

            temp.reverse();

            for (auto val2 : temp)
            {
                cout << val2 << " ";
            }
            cout << "\n";
            temp.clear();
        }
        else
        {
            cout << "Invalid" << "\n";
        }
    }

    return 0;
}