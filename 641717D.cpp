#include <bits/stdc++.h>
using namespace std;

int tui(int n)
{
    int x = 0;
    while (n >= 5)
    {
        x += n / 5;
        n /= 5;
    }
    return x;
}

int main()
{
    int t, tc = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = 1, r = 1e9;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (tui(mid) >= n)
                r = mid;
            else
                l = mid + 1;
        }

        cout << "Case " << tc++ << ": ";

        (tui(l) == n) ? cout << l << endl : cout << "impossible\n";
    }
}