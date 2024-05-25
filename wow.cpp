#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        scanf("%d", &n);

        double a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        printf("Case %d: %.3lf", tc, sum);
    }
}
