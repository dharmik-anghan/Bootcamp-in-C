// Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>

int main()
{
    printf("Enter Number: ");
    int a;
    scanf("%d", &a);

    if(a>=1)
        printf("Positive");
    else
        printf("Non-positive");
    
    return 0;
}