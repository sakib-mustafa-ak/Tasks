/*https://vjudge.net/contest/620605*/
/*Wrong ans*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, w, p, n;
    cin >> m >> w >> p >> n;
    long long candy = 0, count = 0;
    while (1)
    {
        candy += m * w;
        count++;
        if (candy >= n)
        {
            break;
        }
        else if (candy > p)
        {
            long long mw = candy / p;
            candy %= p;
            while (mw > 0)
            {
                if (m > w)
                {
                    w++;
                    mw--;
                }
                else
                {
                    m++;
                    mw--;
                }
            }
        }
    }
    cout << count << endl;
}