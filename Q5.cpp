//Write a program to calculate the volume, surface area and diagonal of a cuboid.

#include<stdio.h>
#include<math.h>
int main()
{
    float l,w,h, vol, tsa, ld;
    printf("Enter the length, width and height of the cuboid: ");
    scanf("%f%f%f", &l,&w,&h);
    vol = l*w*h;
    tsa = 2*(l*w+w*h+h*l);
    ld = sqrt(l*l+w*w+h*h);
    printf("\nVolume of the cuboid is %f", vol);
    printf("\nTotal surface of cuboid is %f", tsa);
    printf("\nLength of the diagonal is %f", ld);
    return 0;
}