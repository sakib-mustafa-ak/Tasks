#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ff first
#define ss second
void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    for (int i = 1; i <= k; i++){
        int x, y;
        cin >> x >> y;
        mp[x] += y;
    }

    vector<int> a;
    for (auto v : mp)
        a.push_back(v.second);

    sort(all(a));
    int ans = 0;
    while (!a.empty() and n--)
    {
        ans += a.back();
        a.pop_back();
    }
    cout << ans << endl;
}

signed main()
{
    Start 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}


