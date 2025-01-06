#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t=1,tc=1;
    cin >> t;
    while(t--)
    {
        int p, s, r;
        cin >> p >> s >> r;
        cout << "Case " << tc++ << ": ";
        if (p == s && r != 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}