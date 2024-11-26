#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t,tc=1;
	cin>>t;
	while(t--){
		cout<<"Case "<<tc++<<": ";
		int n;
		cin>>n;
		int odd=0,mod5=0;
		vector<int> a(n);
		for(int i = 0; i < n ; i++){
			cin>>a[i];
			if(a[i]%2==1)
				odd++;
		} 

		if(n == 1)
			cout<<"0\n";
		else if(odd == n)
			cout<<"1\n";
		else
			cout<<"-1\n";
	}

}
