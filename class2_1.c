/*1. Write a C program that accepts two items' weight and number of purchases
 (floating point values) and calculates their average value.
 Test Data :
 Weight- Item1: 15
 No. of item1: 5
 Weight- Item2: 25
 No. of item2: 4
 Expected Output:
 Average Value = 19.444444*/
#include <stdio.h>
int main()
{
    float weight1, weight2;
    int num1, num2;
    printf("Weight- Item1: ");
    scanf("%f", &weight1);
    printf("No. of item1: ");
    scanf("%d", &num1);
    printf("Weight- Item2: ");
    scanf("%f", &weight2);
    printf("No. of item2: ");
    scanf("%d", &num2);
    float ave = (weight1 * num1 + weight2 * num2) / (num1 + num2);
    printf("Average Value = %f", ave);
    return 0;
}