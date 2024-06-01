#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, count = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        float avg = (float)sum / n;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > avg)
                count++;
        }
        float x = (float)count / n;
        float ans = x * 100;
        printf("%.3f%%\n", ans);
    }
}