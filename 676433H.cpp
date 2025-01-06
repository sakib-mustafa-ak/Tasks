#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define trace(x) cout << #x << ": " << x << endl
const int MOD = 1000000007, N = 310;
int dp[N][N];

int nCr(int n, int r)
{
    if(r == 0 or n == r) dp[n][r] = 1;
    if (r == 1) dp[n][r] = n;

    if(dp[n][r] == -1)
    {
        dp[n][r] = (nCr(n - 1, r - 1) % MOD + nCr(n - 1, r) % MOD) % MOD;
    }

    return dp[n][r];
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t--)
    {
        memset(dp, -1, sizeof(dp));
        int n, m, r1, r2, k; 
        cin >> n >> m >> r1 >> r2 >> k;
        int ans = 0;
        for (int i = r1; i <= n; i++) {
            int g = k - i;
            if (g > m or g < r2) continue;
            ans = (ans + nCr(n, i) % MOD * nCr(m, g) % MOD) % MOD;
        }
        cout << ans << endl; 
    }
    return 0;
}