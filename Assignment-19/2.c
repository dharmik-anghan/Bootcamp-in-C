#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
    printf("Enter 10 City name: - \n");

    char n[10][20], t[20];

    for(int i =0; i < 10; i++)
    {
        printf("%d) ",i+1);
        gets(n[i]);
    }

    printf("\n");

    for(int i=0; i < 9; i++)
    {
        for(int j=i+1; j <10;j++)
        {
            if(strcmp(n[i],n[j])>0)
            {
                strcpy(t,n[i]);
                strcpy(n[i], n[j]);
                strcpy(n[j], t);
            }
        }
    } 

    for(int i=0; i < 10; i++)
    {
        printf("%d) %s\n", i+1, n[i]);
    }
    return 0;
}

