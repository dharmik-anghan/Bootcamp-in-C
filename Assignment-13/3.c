#include <stdio.h>

int evensum(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    printf("%d ", evensum(n));

    return 0;
}

int evensum(int n)
{
    if(n==0)
        return 0;
    return (evensum(n-1)+(2*n-2));    
}