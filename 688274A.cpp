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
    int n,count = 1;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        a[i]={y,x};
    }
    sort(all(a));
    //cout<<a[0].ff<<" "<<a[0].ss<<endl;
    for(int i = 0,j = 1 ; j < n; j++){      
        if(a[j].ss>a[i].ff){        
            count++;
            i=j;
            //cout<<a[i].ff<<" "<<a[i].ss<<endl;
        }
    }
    cout<<count<<endl;
}