#include <stdio.h>

int reverse(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    printf("%d", reverse(n));

    return 0;
}

int reverse(int n)
{
    int s=0, rem;
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
