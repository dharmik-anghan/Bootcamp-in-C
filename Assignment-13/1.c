#include <stdio.h>

int sum(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}

int sum(int n)
{
    if(n==1)
        return 1;
    return (n+sum(n-1));
}
