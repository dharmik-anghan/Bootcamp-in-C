#include <stdio.h>

int main()
{
    
    for(int i = 1; i <= 4; i++)
    {
        for(int j =1; j <=19; j++)
        {
            if(j>=4-i && j<= 6+i)
                printf("*");
            else if(j>=13-i && j<= 16+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = 1; i <=9; i++)
    {
        for(int j =1; j <=19; j++)
        {
            if(j>=i+1 && j<= 19-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}