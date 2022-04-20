//a program to check the divisibility test of 17
#include<stdio.h>
int main ()
{
int number;
printf("enter a number");
scanf("%d",&number);
if(number %17==0)
printf("the number is divisible by 17");
else
printf("the number is not divisible by 17");
return 0;
}