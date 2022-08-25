#include <stdio.h>

int power(int, int);
int main()
{
    int n, a;
    printf("VALUE: ");
    scanf("%d", &n);
    printf("POWER: ");
    scanf("%d", &a);

    printf("%d",power(n, a));

    return 0;
}

int power(int n, int a)
{
    if(a==1)
        return n;
    return n*power(n, a-1);
}