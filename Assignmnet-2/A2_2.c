// Write a program to print a given number without its last digit.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    
    scanf("%d", &n);
    
    int digit = n/10 ;
    printf("Unit number is : %d", digit);

    return 0;
}