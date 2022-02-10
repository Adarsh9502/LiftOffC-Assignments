//Write a program to accept the no of seconds &amp; convert it into days, hours, mins & secs.

#include<stdio.h>
int main()
{
    int no_sec, days, hours, mins, secs;
    printf("Enter the no. of seconds: ");
    scanf("%d", &no_sec);

    days = no_sec/86400;
    hours = (no_sec%86400)/3600;
    mins = ((no_sec%86400)%3600)/60;
    secs = ((no_sec%86400)%3600)%60;

    printf("\n%d seconds is %d days, %d hours, %d minutes, %d seconds", no_sec, days, hours, mins, secs);

    return 0;
}