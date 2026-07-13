#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;

    vector<int> c;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    c = b;
    c.insert(c.end(), a.begin(), a.end());

    for (auto ch : c)
    {
        cout << ch << " ";
    }

    return 0;
}