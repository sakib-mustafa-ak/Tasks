#include <bits/stdc++.h>
using namespace std;
#define int long long

// long long index1(vector<int> a, int n, int left)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (a[mid] >= left)
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return high + 1;
// }

// long long index2(vector<int> a, int n, int right)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (a[mid] <= right)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return high + 1;
// }

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, tc = 1;
    cin >> t;
    while (tc <= t)
    {
        int n, q, low, high;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "Case " << tc << ":\n";
        while (q--)
        {
            int x, y, i1, i2;
            cin >> x >> y;
            low = 0;
            high = n - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (a[mid] >= x)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            i1 = high + 1;

            low = 0;
            high = n - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (a[mid] <= y)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            i2 = high + 1;

            // cout << i2 << " " << i1 << "\n";
            cout << i2 - i1 << endl;
        }
        tc++;
    }
}