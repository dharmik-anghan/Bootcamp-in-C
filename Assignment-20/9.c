//Write a program to print the elements of an array in reverse order.

#include <stdio.h>

int main()
{
    int s[10] = {10,4,5,6,3,74,72,35,1,0};
    int *ptr = s;

    for(int i=9; i >= 0; i--)
    {
        printf("%d ", ptr[i]);
    }return 0;

}