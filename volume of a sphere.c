//a program to find the volume of a sphere
#include<stdio.h>
int main()
{
float volume,radius,pi=3.142;
printf("enter the radius of a sphere");
scanf("%f",&radius);
volume=4/3*pi*radius*radius*radius;
printf("the volume of the sphere=%f",volume);
return 0;
}