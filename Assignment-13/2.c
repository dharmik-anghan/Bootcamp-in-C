#include <stdio.h>

int oddsum(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    printf("%d ", oddsum(n));

    return 0;
}

int oddsum(int n)
{
    if(n==1)
        return 1;
    return (oddsum(n-1)+(2*n-1));    
}