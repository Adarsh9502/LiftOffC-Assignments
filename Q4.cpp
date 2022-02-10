//Input the roll no, name &amp; marks in 4 subjects of a student. Calculate and print the total and average respectively.

#include<stdio.h>

int main()
{
    int roll;
    char name[50];
    float mark1, mark2, mark3, mark4, total, average;
    printf("Enter the name: ");
    gets(name);
    printf("Enter the roll no.: ");
    scanf("%d", &roll);
    printf("Enter the marks of the four subjects: ");
    scanf("%f%f%f%f", &mark1, &mark2, &mark3, &mark4);
    total=mark1+mark2+mark3+mark4;
    average=total/4;
    printf("\nTotal Marks: %f", total);
    printf("\nAverage Marks: %f", average);
    return 0;
}