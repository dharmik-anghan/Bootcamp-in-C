#include <stdio.h>

int permutation(int, int);
int fact(int);

int main()
{
    int n, r;
    
    printf("Permutation: ");
    scanf("%d%d", &n, &r);

    int ans = permutation(n, r);
    printf("%d\n", ans);
    return 0;
}
int fact(int n)
{
    int fact1 = 1;
    for(int i = n; i >= 1; i--)
    {
        fact1 *= i;
    }
    return fact1;
}

int permutation(int n, int r)
{
    int result = fact(n)/fact(n-r);

    return result;
}