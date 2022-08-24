#include <stdio.h>

void revodd(int);
int main()
{
    int n;
    
    printf("NUMBER: ");
    scanf("%d", &n);

    revodd(n);

    return 0; 
}

void revodd(int n)
{
    if(n==0)
        return;
    printf("%d ", 2*n-1);
    revodd(n-1);
}

