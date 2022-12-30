//Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>

int main()
{
    int s[10] = {10,4,5,6,3,74,72,35,1,0}, result = 0;

    int *ptr = s;

    for(int i=0; i < 10; i++)
    {
        result += ptr[i];
    }

    printf("%d", result);
}