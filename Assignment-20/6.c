#include <stdio.h>

int main()
{
    char *a = "DHARMIK";
    char *ptr;
    int i=0;

    ptr=a;
    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }
    printf("%d ", i);

    return 0;    
}