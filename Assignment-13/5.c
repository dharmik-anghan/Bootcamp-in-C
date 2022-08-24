#include <stdio.h>

int sd(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    printf("%d ", sd(n));

    return 0;
}

int sd(int n)
{
    int s;
    if(n==0)
        return 0;
    s = n%10;    
    return (sd(n/10) + s);    
}