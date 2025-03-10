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
    int n;
    string s;
    cin>>n>>s;
    int ab=0,ba=0,ans=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i]=='('&&s[i+1]==')')
            i++;
        else if(s[i]=='(')
            ab++;
        else if(s[i]==')')
            ba++;
        if(ba>ab){
            ans++;
            ba--;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
