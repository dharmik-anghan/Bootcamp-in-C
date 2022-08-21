#include<stdio.h>

void sqare(int );

int main()
{
    int n;
    printf("ENTER: ");
    scanf("%d", &n);

    sqare(n);

    return 0;
}

void sqare(int n)
{
    int c;
    c = n*n;
    printf("%d ", c);  
}