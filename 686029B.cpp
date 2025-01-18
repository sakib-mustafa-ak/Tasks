#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// void solve(){

// }

signed main(){
    int n,d,r;
    //cin>>t;
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