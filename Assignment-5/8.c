#include <stdio.h>

int main()
{
    printf("Enter number: ");
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n ; i++)
        printf("%d square is %d\n", i, i*i);

    return 0;
}