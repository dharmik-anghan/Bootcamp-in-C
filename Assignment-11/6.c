#include<stdio.h>

void prime(int, int);

int main()
{
    int n, n1;
    printf("FIRST SMALL AND SECOND LARGE THAN FIRST ONE\nEnter rang : ");
    scanf("%d%d", &n, &n1);

    prime(n, n1);

    return 0;
}

void prime(int n, int n1)
{
    int i,j;
    for(i =n; i <=n1; i++)
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