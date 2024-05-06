#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > 20 || b > 20 || c > 20)
            printf("Case %d: bad\n", i);
        else
            printf("Case %d: good\n", i);
    }
}