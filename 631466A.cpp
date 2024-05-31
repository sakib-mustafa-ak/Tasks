#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                b.push_back(a[i]);
        }
        if (b.size() == 0)
            cout << "0\n";
        else
        {
            for (int i = 0; i < b.size() - 1; i++)
                cout << b[i] << " ";

            cout << b[b.size() - 1] << "\n";
        }
    }
}