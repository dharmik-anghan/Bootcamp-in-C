#include <stdio.h>

int main()
{
    for(int i = 1; i <=4; i++)
    {
        char x = 'A';
        for(int j=1; j <=7;j++)
        {
            if(j >= i && j<=8-i)
            {
                printf("%c", x);
                j<4?x++:x--;
                 
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}