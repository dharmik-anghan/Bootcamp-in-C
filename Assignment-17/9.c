#include <stdio.h>
#include <string.h>

int main()
{
    char sort[5][10], s[10];
    int r, i, round;

    printf("Enter 5 names ");

    for(i=0; i<5;i++)
        fgets(sort[i], 10, stdin);

    for(round=1;round<5;round++)
    {
        for(i=0;i<5-round;i++)
        {
            r=strcmp(sort[i], sort[i+1]);

            if(r>0)
            {
                strcpy(s,sort[i]);
                strcpy(sort[i],sort[i+1]);
                strcpy(sort[i+1],s);
            }
        }
    }
    printf("\nStrings in dictionary order\n");
    for(i=0; i<5;i++)
        printf("%s", sort[i]);

    return 0;
}
