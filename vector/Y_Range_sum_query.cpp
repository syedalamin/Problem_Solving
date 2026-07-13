#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<long long> pref(n + 1);

    pref[1] = a[1];

    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    while (q--)
    {

        int l, r;
        cin >> l >> r;

        long long sum = 0;

        if (l == 1)
        {
            sum = pref[r];
        }
        else
        {
            sum = pref[r] - pref[l - 1];
        }

        cout << sum << "\n";
    }

    return 0;
}