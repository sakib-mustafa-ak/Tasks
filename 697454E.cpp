#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	std::vector<int> v;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int x; cin>>x;
		v.push_back(x);
	}
	for (int i = 0; i < n; ++i)
	{
		if(v[i]>=v[k-1]&&v[i]>0)
			ans++;
	}
	cout<<ans<<endl;
}