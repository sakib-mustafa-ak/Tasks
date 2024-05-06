#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<double> a;
    ll x;
    double ans;
    while (cin >> x)
    {
        ans = sqrt(x);
        a.push_back(ans);
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        printf("%.4lf\n", a[i]);
    }
}