#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {1, 1, 6}, {1, 1, 1}}, max=0, index, sum=0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == 1)
                sum += a[i][j]; 
        }
        if(sum>max)
        {
            max=sum;
            index = i;
        }
    }
    printf("%d has more 1s", index);
    
    return 0;
}
