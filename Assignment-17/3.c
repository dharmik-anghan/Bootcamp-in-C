#include <stdio.h>

int main()
{
    char str[20];
    int s=0;
    printf("Enter String: ");
    fgets(str, 20, stdin);

    for(int i = 0; str[i] != '\0'; i++)
     {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U')
            s++;
     }
    printf("%d", s);

    return 0;
}