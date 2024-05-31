#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    string s;
    getline(cin, s);
    while (!cin.eof())
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 48 && s[i] <= 57)
                sum += (s[i] - 48);
            else
            {
                if (s[i] == 'b')
                {
                    while (sum--)
                        cout << " ";
                    sum++;
                    // cout << sum << endl;
                }
                else if (s[i] == '!')
                    cout << "\n";
                else if (s[i] >= 65 && s[i] <= 90 || s[i] == '*')
                {
                    while (sum--)
                        cout << s[i];
                    sum++;
                    // cout << sum << endl;
                }
            }
        }
        cout << "\n";
        getline(cin, s);
    }

    // cout << sum << endl;
}