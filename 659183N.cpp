//TLE

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    while (cin>>n)
    {
        if(n==0)
            break;
        int mn = 1000000001, count;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]<mn)
                mn = a[i];
        }
        int ans = mn * n;
        for (int i = 1; i < n; i++)
        {
            count = 1;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[i] <= a[j])
                    count++;
                else
                    break;
            }
            for (int k = i + 1; k < n; k++)
            {
                if (a[i] <= a[k])
                    count++;
                else
                    break;
            }
            int ans2 = count * a[i];
            if(ans2>ans)
            ans = ans2;
        }
        cout<<ans<<endl;
    }
}