#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int p, s, r;
        cin >> p >> s >> r;
        (p == s && r != 1) ? printf("Case %d: No\n", i) : printf("Case %d: Yes\n", i);
    }
}