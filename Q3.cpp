//Write a program to calculate simple and compound interest respectively.

#include<stdio.h>
#include<math.h>

int main()
{
    float P,R,T,SI,CIA;

    printf("Enter the principal, rate of interest and time: ");
    scanf("%f%f%f",&P,&R,&T);
    SI = P*R*T/100;
    CIA = P*pow((1+R/100),T);
    printf("\nSimple Interest: %f",SI);
    printf("\nCompound Interest: %f",CIA-P);
    return 0;
}