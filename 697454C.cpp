#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;

	vector<int> a;
	for (int i = 0; i < m; ++i)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int d = 0 , mn = a[n-1]-a[0];
	for (int i = 0; i <= m-n; ++i)
	{
		mn = min(mn , a[i+n-1]-a[i]);
	}
	cout<<mn<<endl;
}