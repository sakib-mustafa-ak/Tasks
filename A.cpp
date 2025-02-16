#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n,d,r;
    while (cin>>n>>d>>r){
        if(n==0&&d==0&&r==0)
        break;
        int summ=0,sumd=0;
        vector<int> m(n),a(n);
        for (int i = 0; i < n; i++)
            cin>>m[i];
        for (int i = 0; i < n; i++)
            cin>>a[i];
        sort(m.begin(),m.end());
        sort(a.rbegin(),a.rend());
        int ans = 0;
        for (int i = 0; i < n; ++i){
            if(m[i]+a[i]>d)
                ans+= (r*(m[i]+a[i]-d));
        }
        cout<<ans<<endl;
    }   
}