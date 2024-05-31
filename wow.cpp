#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            sum += (s[i] - 48);
            cout << sum << endl;
        }
        else
            cout << 0 << endl;
    }
    // cout << sum << endl;
}