#include <stdio.h>

int main()
{
    printf("Enter number: ");
    int a;
    scanf("%d", &a);

    if(a>99  && a<1000)
        printf("Three-digit number");
    else
        printf("Not Three-digit number");

    return 0;
}