#include <stdio.h>

int main()
{
    char str[20] = "Dharmik";
    int s=0;

    for(int i = 0; str[i] != '\0'; i++)
        s++;
    printf("%d", s);

    return 0;
}
