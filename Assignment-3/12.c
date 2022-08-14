#include<stdio.h>
int main()
{
    char c;
    printf("Enter Char ");
    scanf("%c", &c);

    if(c >= 65 && c <= 90)
        printf("UPPER CASE");
    else if(c >= 97 && c <= 122)
        printf("LOWER CASE");
    else
        printf("ented wrong key!");

    return 0;
}