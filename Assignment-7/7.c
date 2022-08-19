#include<stdio.h>

int main()
{
    int n1, n2, flag = 0, i, n;
    printf("Enter two number to Find Prime number: ");
    scanf("%d%d", &n1, &n2);
    for(n = n1; n<= n2; n++)
    {
        flag=0;
        for(i = 2; i <= n/2; i++)
        {
            if(n%i == 0)
                flag=1;
        }
        if(flag == 0)
            printf("%d ", n);
    }
    return 0;
}