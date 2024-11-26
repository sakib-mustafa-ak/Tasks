#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    int s = (a+b+c);
    int area = (s*(s-2*a)*(s-2*b)*(s-2*c));
    int x = __gcd(area,(4*s*s));
    cout<<area/x<<"/"<<(4*s*s)/x<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}