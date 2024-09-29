#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for (int i = 1; i <= t; ++i)
	{
		cout<<"Case "<<i<<":\n";

		int n,q;
		cin>>n>>q;
		int a[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];

		

		while(q--)
		{
			int l,r,mx,count=1;
			cin>>l>>r;
			mx = a[l];

			for (int i = l+1; i <= r; ++i)
			{
				if(a[i]==mx)
					count++;

				if(a[i]>mx)
				{
					count=1;
					mx = a[i];
				}
			}

			cout<<count<<"\n";
		}

	}
}