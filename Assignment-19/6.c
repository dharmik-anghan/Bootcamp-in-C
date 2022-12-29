#include <stdio.h>
#include <string.h>

int main()
{
    char pala[4][10] = {"MOM", "DAD", "MOTHER", "DOBBOD"};
    
    for(int k=0; k < 4; k++)
    {
        int n=strlen(pala[k]), i=0, j=n-1;

        while(i < j )
        {
            if(pala[k][i] == pala[k][j])
            {
                i++;
                j--;
            }
            else
                break;
            
        }

        if(i>=j)
            printf("%s is Paladrom.\n", pala[k]);
        else
            printf("%s is not Paladrom.\n", pala[k]);
    }

    return 0;

}