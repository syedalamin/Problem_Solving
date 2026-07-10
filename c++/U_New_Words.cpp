#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    int freq[26] = {0};
    for (char c : s)
    {
        freq[c - 'A']++;
    }

    int E = freq['E' - 'A'];
    int G = freq['G' - 'A'];
    int Y = freq['Y' - 'A'];
    int P = freq['P' - 'A'];
    int T = freq['T' - 'A'];
    
    int ans = min({E,G,Y,P,T});

    cout << ans;

    return 0;
}