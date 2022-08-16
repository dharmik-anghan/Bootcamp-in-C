#include <stdio.h>

int main()
{
    for(int i = 1; i <= 4; i++)
    {
        int x= 1;
        for (int j = 1; j <= 7; j++)
        {
            if(j>=5-i && j<=3+i )
            {
                printf("%d", x);
                j<4?x++:x--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}