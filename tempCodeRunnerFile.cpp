#include <bits/stdc++.h>
using namespace std;
#define ll long long

void gg(int hulu)
{
    int n;
    cin >> n;
    ll mat[2 * n - 2][n], sum = 0;
    // cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cin >> mat[i][j];
    }
    // cout << sum << endl;
    for (int i = n; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1 - i; j++)
            cin >> mat[i][j];
    }
    // cout << sum << endl;

    ll mx = mat[2 * n - 2][0], mxj = 0;

    sum += mx;
    for (int i = 2 * n - 3; i >= n - 1; i--)
    {
        sum += max(mat[i][mxj], mat[i][mxj + 1]);
        if (mat[i][mxj] < mat[i][mxj + 1])
            mxj = mxj + 1;
    }

    // cout << sum << endl;

    for (int i = n - 2, k = n - 1; i >= 0; i--, k--)
    {
        if (mxj - 1 >= 0 && mxj < k)
        {
            sum += max(mat[i][mxj], mat[i][mxj - 1]);
            if (mat[i][mxj] < mat[i][mxj - 1])
                mxj = mxj - 1;
        }
        else if (mxj - 1 < 0)
            sum += mat[i][mxj];
        else if (mxj == k)
        {
            sum += mat[i][mxj - 1];
            mxj = mxj - 1;
        }
    }
    // cout << sum << endl;
    printf("Case %d: %lld\n", hulu, sum);
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