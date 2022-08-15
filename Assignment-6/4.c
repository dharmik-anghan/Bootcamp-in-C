#include <stdio.h>

int main()
{
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i*i;
    }
    
    printf("Sum of %d natural number of square is %d.", n, sum);

    return 0;
}