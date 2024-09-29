#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
    cin >> n;
    vector <int> a(n + 1), idx(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        idx[a[i]] = i;
    }
    int ans = 1; 
    for(int i = 2; i <= n; ++i){
        if(idx[i] < idx[i - 1]) 
        	ans++;
    }
    cout << ans << '\n';
}