#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
signed main(){
    Start
    int n,d,r;
    while (cin>>n>>d>>r){
        if(n==0&&d==0&&r==0)
        break;
        int summ=0,sumd=0;
        vector<int> m(n),dd(n);
        for (int i = 0; i < n; i++)
            cin>>m[i];
        for (int i = 0; i < n; i++)
            cin>>dd[i];
        sort(m.begin(),m.end());
        sort(dd.rbegin(),dd.rend());
        int ans = 0;
        for (int i = 0; i < n; ++i){
            if(m[i]+dd[i]>d)
                ans+= (r*(m[i]+dd[i]-d));
        }
        cout<<ans<<endl;
    }   
}