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
    double x,y,z,r,d;
    cin>>x>>y>>z;
    d = (x*y)/z;
    r = sqrt((x*x+y*y+z*z+d*d)/4);
    cout<<fixed<<setprecision(10)<<r<<endl;
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}