#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x , y , k;
        cin>>x>>y>>k;
        int ans = 0;
        int man = max(x,y);
        ans+=((man/k)*2);
        if(man==x)
        {
            if(x%k==0)
                ans--;
            else
            {
                if(y%k>0)
                    ans+=2;
                else
                    ans++;
            }
        }
        if(man==y)
        {
            if(y%k>0)
                ans+=2;
        }

        cout<<ans<<endl;
    }
}