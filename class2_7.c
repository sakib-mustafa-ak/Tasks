/* 7. Write a C program to convert specified days into years, weeks and days.
 Note: Ignore leap year.
 Sample Input:
 Number of days: 1329
 Expected Output :
 Years: 3
 Weeks: 33
 Days: 3
 */
#include <stdio.h>
int main()
{
    int days;
    printf("Number of days: ");
    scanf("%d", &days);
    int years = days / 365;
    int weeks = (days % 365) / 7;
    int days2 = (days % 365) % 7;
    printf("Years: %d\nWeeks: %d\nDays: %d", years, weeks, days2);
    return 0;
}