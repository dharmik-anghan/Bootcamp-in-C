#include<stdio.h>

int prime(int );

int main()
{
    int n, result;
    printf("Enter Number: ");
    scanf("%d", &n);

    result = prime(n);
    if(result == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

int prime(int n)
{
    if(n == 0 || n==1)
        return 1;
    for(int i= 2; i <= n-1; i++)
    {
        if(n%i == 0)
            return 1;
    }
    return 0;
}