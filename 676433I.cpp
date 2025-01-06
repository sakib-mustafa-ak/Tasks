#include <bits/stdc++.h>
using namespace std;
#define int long long

map<int, int> c, pr, ans;
int n;

void preCal(vector<int> a)
{
    for (int i = 0; i < n; i++)
    {
        c[a[i]]++;
        for (auto v : pr){
            int x = __gcd(v.first, a[i]);
            c[x] += v.second;
        }

        pr = c;
        c.clear();

        for (auto v : pr)
            ans[v.first] += v.second;
    }
}

signed main()
{
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];

    preCal(a);

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << ans[x] << endl;
    }
}
