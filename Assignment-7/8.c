#include<stdio.h>

int main()
{
    int n1, flag = 0, i, n;
    printf("Enter number to know next prime number: \n");
    scanf("%d", &n1);
    for(n = n1; n<= n1*2; n++)
    {
        flag=0;
        for(i = 2; i <= n/2; i++)
        {
            if(n%i == 0)
                flag=1;
        }
        if(flag == 0){
            printf("%d ", n);
            break;
        }
    }
    return 0;
}