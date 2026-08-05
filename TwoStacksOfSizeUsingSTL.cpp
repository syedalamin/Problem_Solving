#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;

    stack<int> s3;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        s1.push(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        s2.push(x);
    }

    int sz1 = s1.size();
    int sz2 = s2.size();

    while (!s2.empty())
    {
        s3.push(s2.top());
        s2.pop();
    }

    bool flag = true;

    if (sz1 == sz2)
    {
        for (int i = 0; i < sz2; i++)
        {
            if (s1.top() != s3.top())
            {
                flag = false;
                break;
            }
            s1.pop();
            s3.pop();
        }
    }
    else
    {
        flag = false;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}