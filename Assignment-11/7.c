#include<stdio.h>

void fib(int );

int main()
{
    int n;
    printf("ENTER: ");
    scanf("%d", &n);

    fib(n);

    return 0;
}

void fib(int n)
{
    int n1=-1,n2=1;

    for(int i = 1; i <=n; i++)
    {
        int  c;
        c = n1+n2;
        printf("%d ", c);
        n1=n2;
        n2=c;
    }
    
}