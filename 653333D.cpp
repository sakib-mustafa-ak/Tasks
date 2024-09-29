#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	std::vector<int> a(n);
	
	for (int i = 0; i < n; ++i)
		cin>>a[i];

	sort(a.begin(),a.end());

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(a[j]==a[i])
				break;
			if(a[j]<a[i])
			{
				int x = a[i]-a[j];
				if(x<=k)
				{
					a[j]+=x;
					k-=x;
				}
				else
				{
					a[j]+=k;
					k=0;
				}
			}
		}
		if(k==0)
			break;

	}

	sort(a.begin(),a.end());

	if(k!=0)
		a[0]+=(k/n);
	
	cout<<a[0]<<endl;
}