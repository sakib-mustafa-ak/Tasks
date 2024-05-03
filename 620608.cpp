/*#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, dis = 0;
    string s;
    cin >> n >> k >> s;

    for (long long i = 0; i < n; i++)
    {

        for (long long j = i - 1; j >= 0; j--)
        {
            dis++;
            if (s[i] == s[j])
            {
                dis--;
                break;
            }
        }
    }
    long long ans = abs(k - dis);
    cout << ans << endl;
}

int main()
{
    // int t = 1;
    //  cin>>t;
    // while (t--)
    //{
    solve();
    // }
}*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;
}

int main()
{
    solve();
}