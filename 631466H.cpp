#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, x1, y1, z1;
    cin >> x >> y >> z >> x1 >> y1 >> z1;
    int ans = -1;
    if (x1 >= x)
    {
        x1 -= x;
        if (x1 + y1 >= y)
        {
            int p = x1 + y1;
            p -= y;
            if (p + z1 >= z)
                ans = 1;
            else
                ans = -1;
        }
        else
            ans = -1;
    }
    else
        ans = -1;
    (ans == -1) ? cout << "NO\n" : cout << "YES\n";
}