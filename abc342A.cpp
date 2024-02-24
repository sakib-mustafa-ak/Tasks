#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    cin >> a;
    int x = strlen(a);
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i != j && a[i] == a[j])
            {
                break;
            }
            else if (i != j && a[i] != a[j] && (a[i] != a[j + 1] || a[i] != a[j - 1]))
            {
                cout << i + 1 << endl;
                count++;
                break;
            }
        }
        if (count > 0)
        {
            break;
        }
    }
    return 0;
}