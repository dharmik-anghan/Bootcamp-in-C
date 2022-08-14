#include <stdio.h>

int main()
{
    printf("Enter number: ");
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n*2 ; i++)
        if(i%2 == 0)
            printf("%d ", i);

    return 0;
}