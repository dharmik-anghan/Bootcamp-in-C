#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, sum=0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j+i ==  2){
                sum += a[i][j];
                break;
            }
            
        }
    }
    printf("Left diagonals: %d", sum);
    return 0;
}