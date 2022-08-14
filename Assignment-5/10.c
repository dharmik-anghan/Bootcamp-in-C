#include <stdio.h>

int main()
{
    printf("Enter number: ");
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 10 ; i++)
        printf("%d x %d = %d\n", n, i, i*n);

    return 0;
}