//Write a program to display an employee’s record.

#include<stdio.h>

int main()
{
    int eno=25;
    char ename[50]="Adarsh Goswami";
    float salary=100000.256;

    printf("\nEmployee Name: %s",ename);
    printf("\nEmployee No.: %d",eno);
    printf("\nEmployee salary %f",salary);

    return 0;
}