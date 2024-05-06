#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n;
    // cin >> t;
    while (cin >> n)
    {
        if (n == 0)
            break;
        else
        {
            int sum = 0;
            for (int i = n; i > 0; i--)
            {
                sum += i * i;
            }
            cout << sum << endl;
        }
    }
}