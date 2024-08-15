#include <bits/stdc++.h>
using namespace std;
#define int long long

void WTBA(vector<int> a, vector<int> lol)
{
    for (int i : lol)
    {
        auto batti = lower_bound(a.begin(), a.end(), i);
        auto lomba = upper_bound(a.begin(), a.end(), i);

        (batti == a.begin()) ? cout << "X " : cout << *(batti - 1) << " ";

        (lomba == a.end()) ? cout << "X" << endl : cout << *lomba << endl;
    }
}

signed main()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> q;
    vector<int> lol(q);
    for (int i = 0; i < q; i++)
        cin >> lol[i];

    WTBA(a, lol);
}