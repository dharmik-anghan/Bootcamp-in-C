#include <stdio.h>

int main()
{
    int n;
    printf("Height: ");
    scanf("%d", &n);

    int x = n*2-1;
    for(int i = 1; i<=x; i++)
    {
        for(int j = 1; j <=x ; j++)
        {
            if(j>=n*2-i && j<=x && j%2!=0 && i%2!=0)
            {
                
                j<=n*2-i || j==x || i==x ? printf("*"): printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}