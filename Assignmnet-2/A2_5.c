// Write a program to input a three-digit number and display the sum of the digits.

#include <stdio.h>

int main()
{
    printf("Enter three digits: \n");
    int a, b, c, d;
    scanf("%d%d%d", &a, &b, &c);

    d = a+b+c;
    printf("%d + %d + %d = %d", a, b, c, d);
    return 0;
}