//Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "DHARMIK";
    char *ptr = s;

    int n = strlen(s);

    for(int i = n-1; i >=0; i--)
    {
        printf("%c", ptr[i]);
    }
}