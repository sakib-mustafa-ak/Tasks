#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin>>n;

    vector<string> a;

    for (int i = 0; i < n; ++i)
    {
        string x;
        cin>>x;
        a.push_back(x);
    }

    for (int i = a.size()-1; i >= 0; --i)
    {
        cout<<a[i]<<endl;
    }
}
