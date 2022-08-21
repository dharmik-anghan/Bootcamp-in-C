#include <stdio.h>

hcf(int, int);
int main()
{
    int n1, n2, result;
    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);

    printf("%d", hcf(n1, n2));
}

hcf(int n1, int n2)
{
    int hcf=1, i, j;
    j = n1<n2?n1:n2;
    for(i =1; i <= j; i++)
    {
        if(n1%i == 0 && n2%i == 0)
            hcf = i;
    }
    return hcf;
}