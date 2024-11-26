#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n,k;
	cin>>n>>k;

	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin>>a[i];

	sort(a.begin(),a.end());

	int sum = 0 , i , flag = 0;
	for(i = k - 1 ; i < n ; i++)
	{
		sum = 0;
		for(int j = i - k + 1; j < i ; j++){
			sum+=a[j];
		}
		if(sum>a[i]){
			flag = 1;
			break;
		}
	}
	(flag)?
		cout<<"Yes\n":
		cout<<"No\n";
}
