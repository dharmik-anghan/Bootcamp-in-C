#include<stdio.h>

int main()
{
    printf("Enter number: ");
    int n;
    scanf("%d", &n);

    for(int i = n; i >= 1; i--)
        printf("%d\n", i);

    return 0;
}