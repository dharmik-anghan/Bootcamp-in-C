#include <stdio.h>

int main()
{
    int n, n1, n2, x;
    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);

    n = n1<n2 ? n1:n2;

    for(int i = 1; i < n; i++)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            x = i;
        }
    }
    printf("HCF for %d and %d = %d",n1, n2, x);

    return 0;
}