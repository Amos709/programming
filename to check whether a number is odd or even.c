//To check whether a number is even or not
#include<stdio.h>

int main()
{
int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if(number%2==0)
    printf("number is even");
    else
     printf("number is odd");
    return 0;
}