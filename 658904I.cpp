#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
	int n,q;
	cin>>n>>q;

	std::vector<int> a(n);

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		a[i]-=(i+1);
	}

	sort(a.begin(),a.end());

	while(q--){
		int x;
		cin>>x;
		auto it = lower_bound(a.begin(),a.end(),x) - a.begin();

		cout<<it + x <<endl;
	}
}