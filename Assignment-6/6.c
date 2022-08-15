#include <stdio.h>

int main()
{
    int n;
    printf("Enter: ");
    scanf("%d",&n);

    if(n == 0)
        printf("1\n");

    int factorial = 1;
    for(int i = n; i > 0; i--)
    {
        factorial *= i; 
    }
    printf("Factorial of %d = %d", n, factorial);

    return 0;
}