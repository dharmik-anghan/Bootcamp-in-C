#include <stdio.h>

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a=10, b=20;
    printf("a=%d, b=%d",a,b);

    swap(&a,&b);
    printf("\na=%d, b=%d",a,b);
    
}
