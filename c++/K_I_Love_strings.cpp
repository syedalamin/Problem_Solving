#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;

    cin >> s >> t;

    // cout << s[0] << t[0] << s[1] << t[1];
    // cout;

    int len_s = s.size();
    int len_t = t.size();

    int i;
    for (i = 0; i < len_s && len_t; i++)
    {
        cout << s[i] << t[i];
    }

    if (i < len_s)
    {
        for (; i < len_s; i++)
        {
            cout << s[i];
        }
    }
    if ( i < len_t)
    {
        for (; i < len_t; i++)
        {
            cout << t[i];
        }
    }

    return 0;
}