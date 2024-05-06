#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), ans(q);
        for (int j = 0; j < n; j++)
            cin >> a[j];

        for (int j = 0; j < q; j++)
        {
            int ii, jj;
            cin >> ii >> jj;
            int mn = a[ii - 1];
            for (int k = ii; k < jj; k++)
                mn = min(mn, a[k]);
            ans[j] = mn;
        }
        printf("Case %d:\n", i);
        for (int j = 0; j < q; j++)
        {
            cout << ans[j] << endl;
        }
    }
}