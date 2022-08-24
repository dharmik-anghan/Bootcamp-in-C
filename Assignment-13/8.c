#include <stdio.h>

int fib(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    for(int i =0; i<n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}

int fib(int n)
{
    if(n==1 || n==0)
        return n; 
    return fib(n-1) + fib(n-2);    
}