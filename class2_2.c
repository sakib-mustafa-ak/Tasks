/* 2. Write a C program that accepts an employee's ID, total worked hours in a
 month and the amount he received per hour. Print the ID and salary (with two
 decimal places) of the employee for a particular month.
 Test Data :
 Input the Employees ID: 0342
 Input the working hrs: 8
 Salary amount/hr: 15000
 Expected Output:
 Employees ID = 0342
 Salary = 120000.00 BDT*/
#include <stdio.h>
int main()
{
    int id, wh, sph;
    printf("Input the Employees ID: ");
    scanf("%d", &id);
    printf("Input the working hrs: ");
    scanf("%d", &wh);
    printf("Salary amount/hr: ");
    scanf("%d", &sph);
    printf("Employees ID = %d\nSalary = %.2f BDT", id, (float)sph * wh);
}