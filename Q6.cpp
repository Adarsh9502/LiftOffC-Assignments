/*A manufacturer purchases some machinery parts for his new machine. He has been given a discount of 15 % on the purchase.
Furthermore, he has to pay 6 % of sales tax to import them. Write a program to calculate &amp; display the sales tax and the total price
paid by him.*/

#include<stdio.h>
int main()
{
    float org_price, disc_price, tax, total_price;
    printf("Enter the original price of the machinery: ");
    scanf("%f", &org_price);
    disc_price = org_price-0.15*org_price;
    tax = 0.06*disc_price;
    total_price = tax + disc_price;
    printf("\nSales tax on the machinery is %f", tax);
    printf("\nTotal price paid is %f", total_price);
    return 0;
}