#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;
        int flag = false;

        int left = 0;
        int right = n - 1;

        while (true)
        {
            if (left > right)
            {
                break;
            }

            int mid = (left + right) / 2;

            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] > x)
            {
                right = mid - 1;
            }
            else if (a[mid] < x)
            {
                left = mid + 1;
            }
        }

        if (flag)
        {
            cout << "found" << "\n";
        }
        else
        {
            cout << "not found" << "\n";
        }
    }

    return 0;
}