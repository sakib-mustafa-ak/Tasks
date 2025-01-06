#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5 , MOD = 1e9+7;
// int dp[N][N];


// int nCr(int n, int r)
// {
//     if(r == 0 or n == r) dp[n][r] = 1;
//     if (r == 1) dp[n][r] = n;

//     if(dp[n][r] == -1)
//     {
//         dp[n][r] = (nCr(n - 1, r - 1) % MOD + nCr(n - 1, r) % MOD) % MOD;
//     }

//     return dp[n][r];
// }

int fact(int n)
{
      if(n==0)
      return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = (res % MOD * i % MOD) % MOD;
    return res % MOD;
}


int nCr(int n, int r)
{
    return (fact(n)% MOD) / ((fact(r)% MOD) * (fact(n - r)% MOD)% MOD);
}



signed main(){
	//memset(dp, -1, sizeof(dp));
	int n;
	cin>>n;
	vector<int> a(n),b(n);

	for(int i = 0 ; i < n ; i++)
		cin>>a[i];

	b = a;
	sort(b.begin(),b.end());
	int ans = 0;
	for(auto v : a){
		int x = v*v;
		int y = lower_bound(b.begin(),b.end(),x)-b.begin();
		int count=0;
		for(int i = y ; i < n ; i++){
			if(b[i]%v==0)
				count++;
		}
		for(int k = 1 ; k <= count ;k++){
			ans+=nCr(count,k);
			ans %= MOD;
		}
	}
	cout<<ans % MOD<<endl;
}
