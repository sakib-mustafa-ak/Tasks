#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
	int n;
	cin>>n;

	for(int i = 1 ; i <= 16 ; i++)
	{
		int mlti = i;
		for(int j = 0 ; j < i-1 ; j++)
			mlti *= i;

		if(mlti == n){
			cout<<i<<endl;
			return 0;
		}
	}

	cout<<"-1\n";
}