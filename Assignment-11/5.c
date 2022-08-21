#include<stdio.h>

void prime(int );

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}

void prime(int n)
{
    int i,j;
    for(i =2; i <=n; i++)
    {
        for(j = 2; j <= i; j++)
        {
            if(i%j == 0)
                break;
        }
        if(i == j)
        {
            printf("%d ", i);
        }
    }
}