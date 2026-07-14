#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> pref(n + 1);
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
    {

        pref[i] = pref[i - 1] + a[i];
    }

   
    for (int i = 1; i <= n; i++)
    {
        cout << pref[i] << " ";
    }

    return 0;
}