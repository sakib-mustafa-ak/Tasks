#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[1000000];

signed main()
{
    int n, q, x1 = 0;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    while (q--)
    {
        int qu;
        cin >> qu;
        if (qu == 1)
        {
            int x;
            cin >> x;
            x1 += x;
        }
        else
        {
            int l, r, k;
            cin >> l >> r >> k;
            l += x1;
            r += x1;
            int ans;
            auto low = lower_bound(a, a + n, l);
            ans = low - a + k - 1;
            if (ans >= n || a[ans] > r)
                cout << -1 << endl;
            else
                cout << a[ans] - x1 << endl;
        }
    }
}