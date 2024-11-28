#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define int long long



signed main()
{
    int t = 1, tc = 1;
    // cin>>t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int r = 0, l = 0, r2 = -1, l2 = -1, nn = 0, x = 0, mx = 0;
        
        while (r < n)
        {
            if (a[r] == 0)
                x++;
            while (x > k)
            {
                if (a[l] == 0)
                    x--;
                l++;
            }
            nn = r - l + 1;
            if (nn >= mx)
            {
                mx = nn;
                r2 = r;
                l2 = l;
            }
            r++;
        }
        if (l2 == -1)
        {
            cout << 0 << endl;
            for (int i = 0; i < n; i++)
                cout << a[i] << ' ';
        }
        else
        {
            for (int i = l2; i <= r2; i++)
                a[i] = 1;
            cout << mx << endl;
            for (int i = 0; i < n; i++)
                cout << a[i] << ' ';
        }
    }
}