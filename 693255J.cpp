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
    int n,q,zero=0,one=0;
    cin>>n>>q;
    //vector<int> a(n+1);
    vector<int> v(n+1);
    v[0]= 0;
    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin>>a;
        v[i] = a+v[i-1];
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        // int x = v[r].first-v[l-1].first;
        // int y = v[r].second-v[l-1].second;
        // //cout<<x<<" "<<y<<endl;
        cout<<((r-l+1-v[r]+v[l-1]>(r-l+1)/2)? 0:1)<<endl;
    }
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}