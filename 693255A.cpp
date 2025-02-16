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
    string s;
    cin>>s;
    if(s=="Like")
    	cout<<"(y)\n";
    else if(s=="Love")
    	cout<<"<3\n";
    else if(s=="Care")
    	cout<<"^_<3_^\n";
    else if(s == "Haha")
    	cout<<":p\n";
    else if(s == "Wow")
    	cout<<":O\n";
    else if(s == "Sad")
    	cout<<":'(\n";
    else
    	cout<<">_<\n";
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}