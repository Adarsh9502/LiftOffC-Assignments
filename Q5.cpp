#include<stdio.h>
int main()
{
    int i, fact=1, N;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(i=N; i>0; i--)
    {
        fact=fact*i;
    }
    printf("Factorial of no.: %d", fact);
    return 0;
}