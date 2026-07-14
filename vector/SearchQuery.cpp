#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;

    cin >> q;

    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;

        int l = 0;
        int r = n - 1;
        bool flag = false;

        while (true)
        {
            if (l > r)
            {

                break;
            }

            int mid = (l + r) / 2;

            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] > x)
            {
                r = mid - 1;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
        }
        if (flag)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}