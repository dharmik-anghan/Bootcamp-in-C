#include <stdio.h>

int HCF(int, int);
int main()
{
    int n1, n2;
    printf("VALUE: ");
    scanf("%d%d", &n1, &n2);

    printf("%d ", HCF(n1, n2));

    return 0;
}

int HCF(int a, int b)
{
    int n;
    if(a>b && a%b==0)
        return b;
    if(a<b && b%a==0)
        return a;
        
    n = a<b?a:b;
    a>b?HCF(a%n,b):HCF(a,b%n);
}