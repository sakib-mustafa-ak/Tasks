#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define int long long

signed main()
{
    int t = 1, tc = 1;
    // cin>>t;
    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;
        vector<int> a(n), b(m), ac, bc;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0)
                ac.push_back(a[i] - a[i - 1]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (i > 0)
                bc.push_back(b[i] - b[i - 1]);
        }
        if(m==1){
            cout<<n<<endl;
            return 0;
        }
        for (int i = 0; i <= ac.size()-bc.size(); i++)
        {
            int k = i, j;
            for (j = 0; j < bc.size(); j++)
            {
                if (ac[k] == bc[j]&&k<ac.size())
                    k++;
                else
                    break;
            }
            if (j == bc.size()){
                count++;
                //cout <<j<<" "<< count << endl;
            }
        }
        cout << count << endl;
    }
}