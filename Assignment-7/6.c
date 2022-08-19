// C Program to Print Prime Numbers From 1 to 100
#include <stdio.h>
int main()
{
    int i,n, flag = 0;
    
    for(int n=1; n<=100; n++)
    {
        flag = 0;
        for(i=2; i <= n/2; i++)
        {
            if(n%2 == 0)
                flag=1;
        }
        if(flag==0)
        {
            printf("%d ", n);
        }
    }
    return 0;
}