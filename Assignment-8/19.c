#include <stdio.h>

int main()
{
    
    for(int i = 1; i <= 3; i++)
    {
        for(int j =1; j <=19; j++)
        {
            if(((j>=4-i) && (j<=6+i)) || ((j>=14-i) && (j<=16+i)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = 1; i <= 10; i++)
    {
        for(int j =1; j <=19; j++)
        {
            if((i==1) && (j==7))
                printf("MySirG");
            if(i == 1 && (j>=7) && (j<=12))
                continue;
            if(j>=i && j <=20-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
