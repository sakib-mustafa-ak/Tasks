#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        bool ans = false;
        for (int i = l; i <= r; i++)
        {
            if (a[i] == x)
            {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}