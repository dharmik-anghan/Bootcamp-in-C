// Write a program to print unit digit of a given number
#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    
    scanf("%d", &n);
    
    int unit = n%10;
    printf("Unit number is : %d", unit);
    
    return 0;
    
}