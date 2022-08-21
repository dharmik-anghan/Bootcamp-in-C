#include<stdio.h>

int prime(int );

int main()
{
    int n, result;
    printf("Enter Number: ");
    scanf("%d", &n);

    result = prime(n);
    
    printf("%d", result);

    return 0;
}

int prime(int n)
{
    if(n == 0 || n == 1)
        return 2;
    int i=2;
    while(i <= n/2)
    {
        if(n%i == 0)
        {   
            n++;
            i=2;
        }
        else
            i++;
    }

    return n;
}