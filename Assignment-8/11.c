#include <stdio.h>

int main()
{
    for(int i = 1; i <=5; i++)
    {
        char x = 'A';
        for(int j=1; j <=17;j++)
        {
            if(j>=11-i*2 && j<= 7+i*2)
            {
                if(j%2 != 0)
                {
                    printf("%c", x);
                    j<9? x++ : x--; 
                }
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}