#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    char s, q;

    cin >> a >> s >> b >> q >> c;

    if (s == '+')
    {
        int sum = a + b;
        if (sum == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << sum;
        }
    }
    else if (s == '-')
    {
        int sub = a - b;
        if (sub == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << sub;
        }
    }
    else if (s == '*')
    {
        int mul = a * b;
        if (mul == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << mul;
        }
    }
}