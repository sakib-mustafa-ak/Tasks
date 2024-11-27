#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,mx = 0,ans;
	cin>>n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin>>a[i];

	for(int i = 2 ; i<= 1000 ; i++){
		int x = 0;
		for(auto v:a){
			if(v%i==0)
				x++;
		}
		if(x>mx)
			mx = x, ans = i;
	}
	cout<<ans<<endl;
}