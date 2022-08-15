#include <stdio.h>

int main()
{
    int n,i, f=0;
    printf("Enter Number: ");
    scanf("%d", &n);

    if(n==0 || n==1)
        f=1;

    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
            f=1;
            break;
        printf("%d", n%i);
    }

    f==0?printf("Prime"):printf("Non-Prime");

    return 0;
}
