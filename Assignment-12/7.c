#include<stdio.h>

void sqar(int);

int main()
{
    int n;
    printf("NUMBER: ");
    scanf("%d", &n);

    sqar(n);

    return 0;
}
void sqar(int n)
{
    if(n == 0)
        return;
    sqar(n-1);
    printf("%d^2 = %d\n", n, n*n);
}

