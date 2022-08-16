#include <stdio.h>

int main()
{
    int n;
    printf("Height: ");
    scanf("%d", &n);

    for(int i = 1; i<=n*2-1; i++)
    {
        for(int j = 1; j <=n*2-1 ; j++)
        {
            if(j>=1 && j<=i && j%2!=0 && i%2!=0)
            {
                
                j>=i || j==1 || i==n*2-1 ? printf("*"): printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}