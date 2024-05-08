#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5 + 2;
int a[N], tree[4 * N];

void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = a[st];
        return;
    }

    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);

    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}

int query(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
        return INT_MAX;

    if (l <= st && en <= r)
        return tree[node];

    int mid = (st + en) / 2;

    int q1 = query(2 * node, st, mid, l, r);
    int q2 = query(2 * node + 1, mid + 1, en, l, r);

    return min(q1, q2);
}

/*void update(int node, int st, int en, int idx, int val)
{
    if (st == en)
    {
        a[st] = val;
        tree[node] = val;
        return;
    }

    int mid = (st + en) / 2;
    if (idx <= mid)
        update(2 * node, st, mid, idx, val);

    else
        update(2 * node + 1, mid + 1, en, idx, val);

    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}*/

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, q;
        cin >> n >> q;
        // vector<int> a(n), ans(q);

        for (int j = 0; j < n; j++)
            cin >> a[j];

        build(1, 0, n - 1);
        /*for (int j = 1; j < 16; j++)
        {
            cout << tree[j] << endl;
        }*/

        cout << "Case " << i << ":\n";
        for (int j = 0; j < q; j++)
        {
            int l, r;
            cin >> l >> r;

            int ans = query(1, 0, n - 1, l - 1, r - 1);
            cout << ans << endl;
        }
    }
}