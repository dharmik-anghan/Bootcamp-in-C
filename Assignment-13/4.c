#include <stdio.h>

int square(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    printf("%d ", square(n));

    return 0;
}

int square(int n)
{
    if(n==1)
        return 1;
    return (square(n-1) + n*n);    
}