#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (i <= a && (n - i) <= b)
            ans = max(ans, min(a / i, b / (n - i)));
    }

    cout << ans << endl;
}