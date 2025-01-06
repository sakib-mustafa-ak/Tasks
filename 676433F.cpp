#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair <int, int> a, pair<int,int> b)
{
	if(a.first < b.first)
		return 1;
	if(a.first > b.first)
		return 0;
	if(a.second > b.second)
		return 1;
	return 0;
}

signed main()
{
	int t=1,tc=1;

	vector < pair <int, int> > a(1001);
	for (int i = 1; i <= 1000; i++) {
		a[i].second = i;
		a[i].first = 0;
	}

	for (int i = 1; i <= 1000; i++) {
		for (int j = i; j <= 1000; j += i)
			a[j].first++;
	}

	sort(a.begin(), a.end(), cmp);

	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		cout<<"Case "<<tc++<<": "<<a[n].second<<endl;
	}
}
