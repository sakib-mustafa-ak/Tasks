#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, hulu = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mat[n][3];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
        }
        int mn;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == 0)
                    mat[i][j] += min(mat[i - 1][1], mat[i - 1][2]);
                if (j == 1)
                    mat[i][j] += min(mat[i - 1][0], mat[i - 1][2]);
                if (j == 2)
                    mat[i][j] += min(mat[i - 1][0], mat[i - 1][1]);
            }
        }
        mn = min(mat[n - 1][0], min(mat[n - 1][1], mat[n - 1][2]));

        printf("Case %d: %d\n", hulu++, mn);
    }
}