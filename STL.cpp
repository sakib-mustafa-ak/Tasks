#include<bits/stdc++.h>
using namespace std;
map <string,int> mp;
signed main(){
	int t;
	cin>>t;
	
	int q; cin>>q;
	while(t--){
		string s ;
		int y; cin >> s >> y;
		
		mp[s] = y;
	}
	while(q--){
		int x,y;string s;
		cin >> x >> s;
		if(x == 1){
			cin>>y;
			mp[s] += y;
		}
		else
			cout<<mp[s]<<'\n';
	}
}