#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n,top=-1;
    cin>>n;
    vector<int> a(1000001);
    while(n--){
        int x;
        cin>>x;

        if(x==1)
        {
            top++;
            int xx;
            cin>>xx;
            a[top]=xx;
        }
        if(x==2)
        {
            top--;
        }
        if(x==3)
        {
            int mx = a[top];
            for (int i = top-1; i >= 0; --i)
            {
                if(a[i]>mx)
                    mx = a[i];
            }
            cout<<mx<<endl;
        }
    }

}
