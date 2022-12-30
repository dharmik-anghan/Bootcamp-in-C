#include <stdio.h>

int main()
{
    char *s = "My name is Dharmik.";
    char *ptr;
    int v=0, c=0;;

    ptr=s;

    while(*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            v++;
        else if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
            c++;
        
        ptr++;
    }

    printf("Vovels = %d\nConsonants = %d", v, c);
    return 0;
}