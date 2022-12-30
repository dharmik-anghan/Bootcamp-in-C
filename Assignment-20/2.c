#include <stdio.h>
#include <string.h>

void swap(char **x, char **y)
{
    char *temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    char *a="DHARMIK", *b="ANGHAN";
    printf("a=%s, b=%s",a,b);

    swap(&a,&b);
    printf("\na=%s, b=%s",a,b);
    
}