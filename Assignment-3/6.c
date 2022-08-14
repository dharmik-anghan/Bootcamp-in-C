#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter Two number: ");
    scanf("%d%d", &a, &b);

    if(a>b)
        printf("a is greater nuber = %d", a);
    else if (a<b)
        printf("b is greater number = %d", b);
    else
        printf("Both are equal number %d", a);

    return 0;

}