#include<stdio.h>
int main()
{
    int i=0, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    do
    {
        printf("\nSqaure of %d is\t%d", i, i*i);
        printf("\nCube of %d is\t%d", i, i*i*i);
        i++;
    } while(i<=N);

    return 0;
}