//Write a program to accept the Basic Pay (BP) of an employee. Calculate his HRA, DA, Gross Pay (GP), Net Pay (NP) &amp; Income Tax (IT).

#include<stdio.h>
int main()
{
    float BP, HRA, DA, GP, NP, IT;
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &BP);
    HRA = 0.15*BP;
    DA = 0.10*(BP+HRA);
    GP = BP+HRA+DA;
    NP = GP-0.05*DA;
    IT = 0.10*BP;
    printf("\nHouserent Aloowance: %f", HRA);
    printf("\nDearness Allowance: %f", DA);
    printf("\nGross Pay %f", GP);
    printf("\nNet Pay: %f", NP);
    printf("\nIncome Tax: %f", IT);
    return 0;
}