#include <stdio.h>

int main()
{
    int n, n1=-1, n2=1, x;
    printf("Number of Fib series: ");
    scanf("%d", &n);

    do{
        x = n1+n2;
        if(n == x)
            break;
        n1=n2;
        n2=x;
    }while(x<=n);

    x>n ? printf("%d is not Fibonacci searie", n) : printf("%d is Fibonacci series.", n);
    
    return 0;
}