#include <stdio.h>

void odd(int);

int main()
{
    int n;
    printf("Value: ");
    scanf("%d", &n);

    odd(n);

    return 0;
}

void odd(int n)
{
    for(int i = 1; i <=n; i++)
    {
        printf("%d\n", i*2-1);
    }
}