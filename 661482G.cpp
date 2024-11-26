#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	string s;
	cin>>n>>m>>s;

	while(m--){
		char a,b;
		cin>>a>>b;
		for(int i = 0 ; i < n ;i++){
			if(s[i]==a)
				s[i]=b;
			else if(s[i]==b)
				s[i]=a;
		}
	}

	cout<<s<<endl;

}
