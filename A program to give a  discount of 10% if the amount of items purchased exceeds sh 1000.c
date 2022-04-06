//A program to give a discount of 10% if the amount of items purchased exceeds sh 1000
#include<stdio.h>

int main()
{ 
int  number;
    printf("enter a number");
    scanf("%d",&number);
    if (number>1000)
    printf("There is a discount of 10%");
    else
    printf("there is no dicount");
    return 0;
}