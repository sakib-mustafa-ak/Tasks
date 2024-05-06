#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

const int N = 100100, inf = 1000000;
int a[N];
int size[N / 2];
int main()
{

    int T, n, q, under1, under2, m, uu1, uu2, minn;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        memset(size, 10, sizeof(size));
        scanf("%d%d", &n, &q);
        m = sqrt(n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            size[(int)i / m] = min(size[(int)i / m], a[i]);
        }

        printf("Case %d:\n", t);
        for (int i = 0; i < q; i++)
        {
            scanf("%d%d", &under1, &under2);
            uu1 = (int)under1 / m;
            uu2 = (int)under2 / m;
            minn = inf;
            for (int j = under1; j <= min((uu1 + 1) * m - 1, under2); j++)
            {
                minn = min(minn, a[j]);
            }
            for (int j = uu1 + 1; j < uu2; j++)
            {
                minn = min(minn, size[j]);
            }
            if (uu1 != uu2)
            {
                for (int j = uu2 * m; j <= under2; j++)
                    minn = min(minn, a[j]);
            }
            printf("%d\n", minn);
        }
    }
    return 0;
}