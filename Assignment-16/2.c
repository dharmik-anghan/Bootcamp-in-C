#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3], total;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            total = 0;
            for(int k = 0; k < 3; k++)
            {
                total += a[i][k] + b[k][j];
            }
            c[i][j] = total;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%2d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}