#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    int x,y,sum=0;
    vector<int> s;
    cin>>x>>y;
    sum+=(y-x);
    n--;
    while(n--){
        cin>>x;
        s.push_back(x-y);
        cin>>y;
        sum+=(y-x);
    }
    int ans = sum*p1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>=t1){
            ans+= t1*p1;
            s[i]-=t1;
        }else{
            ans += s[i]*p1;
            s[i] = 0;
        }
        
        if(s[i]>=t2){
            ans += t2*p2;
            s[i]-=t2;
        }else{
            ans+= s[i]*p2;
            s[i] = 0;
        }

        ans+= s[i]*p3;

    }
    cout<<ans<<endl;
}

signed main(){
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}