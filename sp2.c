#include <stdio.h>

int main()
{
    int x = 7;
    printf("%d\n", x++);
    // int y = x++ + ++x;
    printf("y = %d\n%d", (x++ + ++x + x++), x);
}