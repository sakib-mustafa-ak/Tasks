#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double l, w, d;
        cin >> l >> w >> d;
        printf("Case %d: %.2lf\n", i, ((w - d) / 2) * l);
    }
}