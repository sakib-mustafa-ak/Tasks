#include<bits/stdc++.h>
using namespace std;

int main(){
	int t = 1 ;
	//cin>>t;
	while(t--){
		int n , t, a;
		cin>>n>>t>>a;
		int x = n-(t+a);
		if(abs(t-a)>x)
			cout<<"Yes\n";
		else
			cout<<"No\n";

	}
}