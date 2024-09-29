#include<bits/stdc++.h>
using namespace std;
#define int long long 

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	return gcd(b , a%b);
}

signed main()
{
	int t;
	cin>>t;
	for(int tc = 1 ; tc <= t ; tc++)
	{
		cout<<"Case "<<tc<<": ";
		int n;
		cin>>n;
		vector<int> a(n);

		for(int i = 0 ; i < n ; i++)
			cin>>a[i];

		int llcm = a[0];

		for(int i = 1 ; i < n ; i++)
			llcm = (a[i]*llcm)/ gcd(a[i],llcm);

		cout<<35*llcm<<endl;
	}
}