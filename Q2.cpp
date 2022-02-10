//Write a program to accept an employee’s data & display it to him.

#include<stdio.h>

int main()
{
    int eno;
    char ename[50];
    float salary;
    printf("\nEnter the employee name: ");
    gets(ename);
    printf("\nEnter the employee no.: ");
    scanf("%d", &eno);
    printf("\nEnter the salary: ");
    scanf("%f", &salary);

    printf("\nEmployee No.: %d",eno);
    printf("\nEmployee Name: %s",ename);
    printf("\nEmployee salary %f",salary);

    return 0;
}