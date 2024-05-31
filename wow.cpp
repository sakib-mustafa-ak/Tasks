#include <stdio.h>

int a[1005], n, flip;
void InsertionSort();
int main()
{
    int i, j;
    while (scanf("%d", &n) == 1)
    {
        for (i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        InsertionSort();
        printf("Minimum exchange operations : %d\n", flip);
    }

    return 0;
}
void InsertionSort()
{
    int k, ptr, temp, set;
    flip = 0;
    for (k = 2; k <= n; k++)
    {
        temp = a[k];
        ptr = k - 1;
        while (temp < a[ptr])
        {
            a[ptr + 1] = a[ptr];
            ptr = ptr - 1;
            set = 1;
            flip += 1;
            // for (int x = 0; x < n; x++)
            // {
            //     printf("%d ", a[x]);
            // }
            // printf("\n");
        }
        a[ptr + 1] = temp;
    }
}