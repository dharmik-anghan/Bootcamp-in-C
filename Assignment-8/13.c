#include <stdio.h>

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        char x = 'A';
        for (int j = 1; j <= 13; j++)
        {
            if (j <= 8 - i || j >= 6 + i)
            {
                printf("%c", x);
                j < 7 ? x++ : x--;
            }
            else
            {
                printf(" ");
                if (5 + i == j)
                    x--;
            }
        }
        printf("\n");
    }
    return 0;
}