#include<bits/stdc++.h>
using namespace std;
#define int long long


#define endl "\n"
const int N = 1e5 + 128, INF = 2e9;
int a[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        int n,l,r; 
        cin>>n>>l>>r;

        vector<int>v(n);

        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());

        int count = 0;

        for(int i=0;i<n;i++)
        {
            int lv = l - v[i];
            int rv = r - v[i];
            int x = lower_bound(v.begin()+i+1,v.end(),lv) - v.begin();
            int y = upper_bound(v.begin()+i+1,v.end(),rv)- v.begin()-1;
            if(y>=x)
                count+=(y - x+1);
        }
        cout<<count<<endl;

    }

    return 0;
}
