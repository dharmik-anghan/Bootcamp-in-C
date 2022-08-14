// Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main()
{
    printf("Enter Number: ");
    int a;
    scanf("%d", &a);

    if(a%5==0 && a>1)
        printf("Divisible");
    else
        printf("Not DIvisible");
    
    return 0;
}