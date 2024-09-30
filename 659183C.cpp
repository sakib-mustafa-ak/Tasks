#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1e5+10;
int a[N];
int n,k,t;

int bs(int x)
{
    int l = 0,r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid]==x) return 1;
        else if(a[mid]>x)
            r = mid-1;
        else
            l = mid+1;
    }
    return 0;
}

int main()
{
    int i , count;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin>>n>>k;
        for (i = 0; i < n; ++i)
            cin>>a[i];

        sort(a,a+n);

        for (i = 0; i < n; ++i)
        {
            if(i&&a[i]==a[i-1])
                continue;
            if(bs(k-a[i])==1)
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}