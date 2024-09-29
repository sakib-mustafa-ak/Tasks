#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	vector<ll> a(n),b(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<a[b[i]-1]<<" ";
		auto it = a.begin() + b[i] -1;
		a.erase(it);
	}

}
