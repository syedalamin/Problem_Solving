#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {

        string s, t;

        cin >> s >> t;

        int len_s = s.size();
        int len_t = t.size();

        int i;
        for (i = 0; i < len_s && i < len_t; i++)    
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
        if (i < len_t)
        {
            for (; i < len_t; i++)
            {
                cout << t[i];
            }
        }
        cout << "\n";
    }
    return 0;
}