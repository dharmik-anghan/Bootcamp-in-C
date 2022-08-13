// Write a program to swap values of two int variables without using a third variable.

#include <stdio.h>

int main()
{
    int a=3,b=5, c;
    printf("a=%d b=%d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d b=%d\n", a, b);

    return 0;
}