#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
	int n,a,b,c,count = 0;
	cin>>n>>a>>b>>c;

	if(n >= b && a > b-c)
	{
		int x ;
		x = (n-c)/(b-c);

		n -= (b-c)*x;

		x+= n/a;
		count += x;
	}
	else
		count += n/a;

	cout<<count<<endl;
}