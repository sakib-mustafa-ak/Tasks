#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a = 1, b = 1;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            (s[i] == '0') ? a = (a * 2) % 100003 : b = (b * 3) % 100003;
        }
        cout << (a + b) % 100003 << endl;
    }
}