#include <stdio.h>

int main()
{
    int a[3][3] = {{0, 1, 3}, {4, 0, 6}, {7, 0, 0}}, count=0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == 0)
                count++;
        }
    }
    if(count >= (3*3)/2)
        printf("It's Sparse Matrix.");
    else
        printf("It's not Sparse Matrix.");
    
    return 0;
}
