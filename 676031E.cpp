#include<bits/stdc++.h>
using namespace std;

int main(){
	int t = 1 ;
	//cin>>t;
	while(t--){
		int n,l,r;
		cin>>n>>l>>r;

		for(int i = 1 ; i <= n ; i++){
			while(l==i){
				while(l<=r){
					cout<<r<<" ";
					r--;
					i++;
				}
			}
			if(i<=n)
			cout<<i<<" ";
		}
	}
}