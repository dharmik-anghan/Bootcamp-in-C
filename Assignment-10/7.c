#include <stdio.h>

int factorial(int, int);
int fact(int);

int main()
{
    int n, r;
    do
    {
        printf("Combination: ");
        scanf("%d%d", &n, &r);
    }
    while(n <= r);

    int ans = factorial(n, r);
    printf("%d\n", ans);
    return 0;
}
int fact(int n)
{
    int fact1 = 1;
    for(int i = n; i >= 1; i--)
    {
        fact1 *= i;
    }
    return fact1;
}

int factorial(int n, int r)
{
    int result = fact(n)/(fact(r)*fact(n-r));

    return result;
}