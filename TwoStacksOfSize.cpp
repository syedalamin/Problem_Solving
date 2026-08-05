#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{

    myStack s1;
    myStack s2;
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

    int sz = s1.size();
    int sz2 = s2.size();

    bool flag = true;

    if (sz == sz2)
    {
        for (int i = 0; i < sz2; i++)
        {
            if (s1.top() != s2.top())
            {
                flag = false;
                break;
            }

            s1.pop();
            s2.pop();
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