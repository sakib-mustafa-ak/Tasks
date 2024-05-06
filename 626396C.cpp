#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pi acos(-1)

dd lengthx(dd x1, dd x2, dd y1, dd y2)
{
    double x = pow(x2 - x1, 2), y = pow(y2 - y1, 2);
    // cout << x << " " << y << endl;
    return sqrt(x + y);
}

int main()
{
    int n;
    double r;
    cin >> n >> r;
    vector<double> x, y;
    for (int i = 0; i < n; i++)
    {
        double a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            ans += lengthx(x[i - 1], x[0], y[i - 1], y[0]);
        else
            ans += lengthx(x[i - 1], x[i], y[i - 1], y[i]);
    }
    // cout << ans << endl;
    ans += (pi * r) * 2;
    printf("%.2lf\n", ans);
}