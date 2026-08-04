#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
   
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        l.push_back(val);
    }

    list<int> temp(l);

    l.sort();
    temp.sort(greater<int>());
    for(auto v : l){
        cout<< v << " ";
    }
    cout<< "\n";
    for (auto v2 : temp)
    {
        cout << v2 << " ";
    }

    return 0;
}