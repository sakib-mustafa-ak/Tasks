#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define int long long

signed main(){
	int t = 1 ,tc = 1;
	cin>>t;
	while(t--){
		int r,ab;
		cin>>r>>ab;
		double x = (ab*1.0)/(2*r*1.0);
		double ans = acos(x)*180.0/pi;
		printf("Case %lld: %0.4lf\n",tc++,ans);
	}
}