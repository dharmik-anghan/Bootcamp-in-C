#include <stdio.h>

int strlen(char a[]);

int main()
{
    printf("ENTER STRING: ");
    char a[150];
    fgets(a,150,stdin);

    printf("LENGTH: %d", strlen(a));

    return 0;
}

int strlen(char a[])
{
    int b=0;
    for(int i=0; a[i]; i++)
    {
        if(a[i] != ' ')
            b++;
    }
    return b-1;
}