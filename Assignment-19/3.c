#include <stdio.h>

int main()
{
    char s[2][3] = {"DHA", "ANA"};

    for(int i=0; i < 2; i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("%d %d %c\n", i, j, s[i][j]);
        }
    }

    return 0;
}