#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    	cin>>a[i];

    sort(rall(a));
    if(n<3){
    	cout<<"0\n";
    	return;
    }
    int ans = 0;
    for (int i = 2; i < n; i+=3)
    	ans+=a[i];

    cout<<ans<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}