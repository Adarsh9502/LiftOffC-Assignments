#include<stdio.h>
int main()
{
    int i=0, No[20], sum_positive=0, sum_negative=0, c_positive=0, c_negative=0;
    printf("Enter a number (Enter -1 to break): ");
    while(i<20)
    {
        scanf("%d", &No[i]);
        if(No[i]==-1)
        {
            break;
        }
        i++;
    }
    for(i=0; i<20; i++)
    {
        if(No[i]>0)
        {
            sum_positive += No[i];
            c_positive++;
        }
        else if(No[i]<0)
        {
            sum_negative += No[i];
            c_negative++;
        }
    }
    
    printf("\nSum and Mean of all positive number is %d and %d respectively.", sum_positive, sum_positive/c_positive);
    printf("\nSum and Mean of all negative numbers is %d and %d respectively", sum_negative, sum_negative/c_negative);
    return 0;
}