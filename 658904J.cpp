#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int powr (int a, int b)
{
	int ans = 1;
	while(b)
	{
		if(b & 1){
			ans = (ans*a) % mod;
		}
		a = (a*a)%mod;
		b /= 2;
	}
	return ans;
}


signed main()
{
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		
		cout << (8 * powr(9,n-1))% mod <<endl;
	}

}
