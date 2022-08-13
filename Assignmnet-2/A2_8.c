// Write a program to check whether the given number is even or odd using a bitwise
// operator.

#include <stdio.h>

int main()
{
    printf("Enter number: \n");
    int a;
    scanf("%d", &a);

    if(a%2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}