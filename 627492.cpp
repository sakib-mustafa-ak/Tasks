// No A
/*#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d\n", sum);
}*/

// NO B
/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}*/

// NO C
/*#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    scanf("%s", &s);

    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == num[i])
                count++;
        }
        printf("%d ", count);
    }
}*/

// NO D
/*#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
}*/

// NO E
/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= n + 1 - i; j--)
            printf("%d ", j);

        for (int j = (n * 2 - 1) - (2 * i); j >= 1; j--)
            printf("%d ", n + 1 - i);

        for (int j = n + 1 - i; j <= n; j++)
        {
            if (i == n)
            {
                for (j = n - i + 2; j <= n; j++)
                    printf("%d ", j);
            }
            else
                printf("%d ", j);
        }

        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        if (i != 1)
        {
            for (int j = n; j >= i; j--)
                printf("%d ", j);

            for (int j = 1; j <= 2 * (i - 1) - 1; j++)
                printf("%d ", i);

            for (int j = i; j <= n; j++)
                printf("%d ", j);

            printf("\n");
        }
    }
}*/

// NO F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int *marks, int number_of_students, char gender)
{
    int sum = 0, i;
    if (gender == 'b')
    {
        for (int i = 0; i < number_of_students; i += 2)
            sum += marks[i];
    }
    else if (gender == 'g')
    {
        for (int i = 1; i < number_of_students; i += 2)
            sum += marks[i];
    }

    return sum;
}

int main()
{
    int n, sum;
    char s;
    scanf("%d", &n);

    int *marks = (int *)malloc(n * 4);

    for (int i = 0; i < n; i++)
        scanf("%d", (marks + i));

    scanf(" %c", &s);
    sum = marks_summation(marks, n, s);
    printf("%d\n", sum);
    free(marks);
}

// NO G
/*#include <stdio.h>

int main()
{
    printf("ZEROONE\n");
}*/

// NO H

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int sum = n * (n + 1) / 2;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        sum -= a[i];
    }

    printf("%d\n", sum);
}*/