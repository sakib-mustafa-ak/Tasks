/* 5. Write a C program to print the roots of Bhaskara’s formula from the given three
 floating numbers.
 Test Data :
 Input the first number(a): 25
 Input the second number(b): 35
 Input the third number(c): 12
 Expected Output:
 Root1 =-0.60000
 Root2 =-0.80000*/
#include <stdio.h>
#include <math.h>
int main()
{

    double a, b, c;
    printf("Input the first number(a): ");
    scanf("%lf", &a);
    printf("Input the second number(b): ");
    scanf("%lf", &b);
    printf("Input the third number(c): ");
    scanf("%lf", &c);
    if (a != 0 && ((b * b) - 4 * a * c) >= 0)
    {
        printf("Root1 = %.5lf\nRoot2 = %.5lf\n", (-b + sqrt((b * b) - 4 * a * c)) / (2 * a), (-b - sqrt((b * b) - 4 * a * c)) / (2 * a));
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}