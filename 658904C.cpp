#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	sort(a.begin(),a.end());

	for (int i = a.size()-1; i >= 0; --i)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	}
	
}