#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
        cin>>n;

        vector<int> a(n),b;

        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        } 

        set<int> a2;
        for (int i = 0; i < n; ++i)
        {
            a2.insert(a[i]);
        }

        for(auto i:a2)
            b.push_back(i);
        
        int ans = 0;

        for(int i = 0 ; i < b.size() ; ++i)
        {
            auto it = lower_bound(b.begin(),b.end(),b[i]+n);
            int x = it - b.begin() - i;
            if(x>ans)
                ans=x;
        }

        cout<<ans<<endl;
    }
}
