#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, row=0, column=0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            row += a[i][j];   
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            column += a[j][i];   
        }
    }
    printf("Row :    %d\n", row);
    printf("column : %d", column);
    return 0;
}