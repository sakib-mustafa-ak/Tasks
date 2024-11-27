#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1)
			cout<<"1\n";
		else if(n==2)
			cout<<"-1\n";
		else if(n>2){
		cout<<n<<" "<<n-1<<" "<<1;
		for(int i=4;i<=n;i++)
			cout<<" "<<n;
		cout<<endl;
		}
	}
}