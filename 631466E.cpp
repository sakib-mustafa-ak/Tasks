#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    while (cin >> n)
    {
        if (n == 0)
            break;
        else
        {
            cin >> s;
            int a = s.size() / n, b = a - 1, c = 0;
            while (b < s.size())
            {
                for (int j = b; j >= c; j--)
                {
                    cout << s[j];
                }
                if (b < s.size())
                {
                    c += a;
                    b += a;
                }

                // cout << c << " " << b << endl;
            }
            cout << "\n";
        }
    }
}