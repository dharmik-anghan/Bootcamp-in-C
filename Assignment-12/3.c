#include <stdio.h>

void odd(int);

int main()
{
    int n;
    
    printf("NUMBER: ");
    scanf("%d", &n);

    odd(n);

    return 0;
}

void odd(int n)
{
    if(n==0)
        return;
    odd(n-1);
    printf("%d ", 2*n-1);
}