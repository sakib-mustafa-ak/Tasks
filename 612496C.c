#include <stdio.h>
int main()
{
    int t, c = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int total = a + b;
        printf("Case %d: %d\n", i, total);
    }
    return 0;
}