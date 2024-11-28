#include<bits/stdc++.h>
using namespace std;

int main(){
	int t = 1 ;
	//cin>>t;
	while(t--){
		int n,a;
		cin>>n>>a;
		int ans = 0;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin>>x;
			ans = max(ans,x)+a;
			cout<<ans <<endl;
		}

	}
}