#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	std::vector<int> a(n);
	int ans;
	cin>>a[0];
	ans = a[0];
	for (int i = 1; i < n; ++i)
	{
		cin>>a[i];
		ans = max(ans,a[i]);
	}
	cout<<ans<<endl;
}