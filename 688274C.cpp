#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
// #define ff first
// #define ss second

signed main(){
    Start
    int n,w;
    cin>>n>>w;
    vector<pair<double,int>> a(n);
    for (int i = 0; i < n; ++i)
    {
    	int x,y;
    	cin>>x>>y;
    	a[i].first =(double) x/y;
    	a[i].second = y;
    }
    sort(rall(a));
    
    double ans = 0;
    for (int i = 0; i < n&&w>0; ++i)
    {
    	if(a[i].second<=w){
    		ans += a[i].first*a[i].second;
    		w -= a[i].second;
    	}
    	else{
    		ans += w*a[i].first;
    		w = 0;
    	}
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
}