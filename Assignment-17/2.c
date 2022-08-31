#include <stdio.h>

int main()
{
    char str[] = "Dharmiik";
    char b;
    printf("enter char: ");
    scanf("%c", &b);
    int s=0;

    for(int i = 0; str[i] != '\0'; i++)
     {
        if(str[i] == b)
            s++;
     }
    printf("%d", s);

    return 0;
}