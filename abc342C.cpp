#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int t;
    cin >> t;
    while (t--)
    {
        char c, d;
        cin >> c >> d;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == c)
            {
                a[i] = d;
            }
        }
    }
    cout << a << endl;
}