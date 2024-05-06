#include <bits/stdc++.h>
using namespace std;
#define ll long long

void gg(int hulu)
{
    int n;
    cin >> n;
    ll mat[2 * n - 1][n], sum = 0;
    // cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cin >> mat[i][j];
    }
    // cout << sum << endl;
    for (int i = n; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1 - i; j++)
            cin >> mat[i][j];
    }
    // cout << sum << endl;

    ll mx = mat[0][0];
    // cout << mx << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
                mat[i][j] += mat[i - 1][j];
            else if (j == i)
                mat[i][j] += mat[i - 1][j - 1];
            else
                mat[i][j] += max(mat[i - 1][j], mat[i - 1][j - 1]);
            mx = max(mx, mat[i][j]);
            // cout << mx << endl;
        }
    }

    // cout << mx << endl;

    for (int i = n; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1 - i; j++)
        {
            mat[i][j] = mat[i][j] + max(mat[i - 1][j], mat[i - 1][j + 1]);
            mx = max(mx, mat[i][j]);
        }
    }

    printf("Case %d: %lld\n", hulu, mx);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        gg(i);
    }
}