/*
void countApplesAndOranges(int s, int t, int a, int b, int m, int n, int *apples, int *oranges)
{
    // int an = sizeof(apples) / sizeof(apples[0]);
    // int on = sizeof(oranges) / sizeof(oranges[0]);
    int ca = 0, co = 0;
    for (int i = 0; i < m; i++)
    {
        if (a + apples[i] >= s && a + apples[i] <= t)
            ca++;
    }
    for (int i = 0; i < n; i++)
    {
        if (b + oranges[i] >= s && b + oranges[i] <= t)
            co++;
    }
    cout << ca << endl;
    cout << co << endl;
}*/

/*void countingValleys(int steps, string path)
{
    int c = 0, v = 0;
    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'U')
            c++;
        else
            c--;
        if (c == 0 && path[i] == 'U')
            v++;
    }
    cout << v << endl;
}*/

/*int t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> s;
        cout << "Case " << ++tc << ": ";
        ll x, y, count = 1, sum = 1;
        double count2 = sqrt(s);
        count = sqrt(s);
        if (count2 - count != 0.00)
            ++count;
        sum = count * count - (count - 1);
        if (sum == s)
            x = count, y = count;
        else if (sum < s)
        {
            if (count % 2 == 0)
                x = count, y = sum + count - s;
            else
                y = count, x = sum + count - s;
        }
        else
        {
            if (count % 2 == 0)
                y = count, x = s - (sum - count);
            else
                x = count, y = s - (sum - count);
        }
        cout << x << " " << y << endl;
    }*/

/*int t, tc = 0;
    cin >> t;
    while (t--)
    {
        int n, mn = 30001, count;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
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
            ans = max(ans, ans2);
        }
        printf("Case %d: %d\n", ++tc, ans);
    }*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    vector<ll> a;
    for (int i = 0; i < 10; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    auto it = lower_bound(a.begin(), a.end(), 9);
    ll ans = it - a.begin();
    cout << ans << endl;
}