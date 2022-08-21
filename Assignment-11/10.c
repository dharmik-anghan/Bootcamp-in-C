#include<stdio.h>

int fact(int );

int main()
{
    int n,sum, c=0;
    printf("ENTER: ");
    scanf("%d", &n);

    for(int i =1; i <=n; i++)
    {
        c = c+(fact(i)/i);
    }
    printf("%d", c);

    return 0;
}

int fact(int n)
{
    if(n ==0 || n==1)
        return 1;
    int c = 1;
    for(int i = n; i >=1; i--)
    {
        c *= i;
    }  
    return c;
}