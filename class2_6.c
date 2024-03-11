/* 6. Print the following pattern as it is
 *
 ***
 *****
 *******
 *********
 */
#include <stdio.h>
int main()
{
    int raw = 5;
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < raw - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i * 2; j++)
        {

            printf("*");
        }
        printf("\n");
    }
}