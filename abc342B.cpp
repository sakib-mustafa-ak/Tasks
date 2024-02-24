#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int ta, tb;
        cin >> ta >> tb;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == ta)
            {
                cout << ta << endl;
                break;
            }
            else if (a[i] == tb)
            {
                cout << tb << endl;
                break;
            }
        }
    }
}