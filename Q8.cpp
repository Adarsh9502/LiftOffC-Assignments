//Write a program to convert a given no of days into years, weeks & days.

#include<stdio.h>
int main()
{
    int no_day, years, weeks, days;
    printf("Enter the no. of days: ");
    scanf("%d", &no_day);

    years = no_day/365;
    weeks = (no_day%365)/7;
    days = (no_day%365)%7;

    printf("\n%d days is %d years, %d weeks, %d days", no_day, years, weeks, days);

    return 0;
}