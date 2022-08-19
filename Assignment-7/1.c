// Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>

int main()
{
    int n, n1=1, n2=0, x;
    printf("Enter Nth Fib number: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        x=n1+n2;
        n1=n2;
        n2=x;
    }
    printf("%d number Fib series is %d.", n, x);


    return 0;
}