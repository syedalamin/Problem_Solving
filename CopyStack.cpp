#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    stack<int> sCopy;

    while (!s.empty())
    {
        sCopy.push(s.top());
        s.pop();
    }
    int sz = sCopy.size();
    while (!sCopy.empty())
    {
        cout << sCopy.top() << " ";
        sCopy.pop();
    }

    return 0;
}