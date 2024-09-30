#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, nn, flag = 1;
    cin >> n;
    x = n;
    nn = n;
    vector<int> ans, ans2;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        ans.push_back(i);
    }

    cout << "\n";
    while (1)
    {
        cin >> n;
        if (n == x)
            break;

        for (int i = 0; i < n - 1; i++)
            ans2.push_back(ans[i]);

        for (int i = ans.size() - 1; i >= n - 1; i--)
            ans2.push_back(ans[i]);

        for (int i = 0; i < x; i++)
        {
            cout << ans2[i] << " ";
            ans[i] = ans2[i];
        }
        cout << "\n";
        ans2.clear();
    }
}