#include <stdio.h>

int factorial(int);

int main()
{
    int n;
    printf("Factorial: ");
    scanf("%d", &n);

    printf("%d\n", factorial(n));
    return 0;
}

int factorial(int n)
{
    int fact = 1;
    for(int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}