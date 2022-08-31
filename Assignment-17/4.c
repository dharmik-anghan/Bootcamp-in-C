#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter String: ");
    fgets(str, 20, stdin);

    for(int i = 0; str[i] != '\0'; i++)
     {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else
            continue;
     }

     for(int i = 0;  str[i] != 0; i++)
     {
        printf("%c", str[i]);
     }

    return 0;
}