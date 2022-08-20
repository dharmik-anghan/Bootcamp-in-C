#include <stdio.h>

void natural(int);

int main()
{
    int n;
    printf("Value: ");
    scanf("%d", &n);

    natural(n);

    return 0;
}

void natural(int n)
{
    for(int i = 1; i <=n; i++)
    {
        printf("%d\n", i);
    }
}