#include <stdio.h>

int main()
{
    int n, n1=-1, n2=1, x;
    printf("Number of Fib series: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        x = n1+n2;
        printf("%d ", x);
        n1=n2;
        n2=x;
    }
    return 0;
}