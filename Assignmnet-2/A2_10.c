// Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)

#include <stdio.h>

int main()
{
    printf("Enter number: \n");
    int a, c;
    scanf("%d", &a);
    c = a%10;
    a -= c;
    printf("%d", a);
    return 0;
}