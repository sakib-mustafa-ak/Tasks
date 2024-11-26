#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, tc = 1;
	cin>>t;
	while(t--){
		char a,b;
		cin>>a>>b;

		int v = b-a;
		for(int i = 1 ; i <= v ; i++){
			if(v%i==0){
				cout<<i<<" "<<94/i+(94%i>0)<<endl;
			}
		}
		cout<<endl;	
	}
}