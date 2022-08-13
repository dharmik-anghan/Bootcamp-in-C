// Write a program to swap values of two int variables

#include <stdio.h>

int main()
{
    int a=3,b=5, c;
    printf("a=%d b=%d\n", a, b);

    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d\n", a, b);

    return 0;
}