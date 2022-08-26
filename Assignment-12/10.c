#include <stdio.h>

int s=0, rem;
int reverse(int n)
{
    if(n)
    {
        rem=n%10;
        s = s*10 + rem;
        reverse(n/10);
    }
    else
        return s;
    return s;           
}

int main()
{
    int n,rev;
    printf("VALUE: ");
    scanf("%d", &n);

    rev = reverse(n);
    printf("%d", rev);

    return 0;
}

