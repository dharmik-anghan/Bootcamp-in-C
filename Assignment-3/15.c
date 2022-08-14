#include<stdio.h>
int main()
{
    int num;
    printf("Enter Value: ");
    scanf("%d", &num);

    if(num>0)
        printf("%d is Positive Number.", num);
    else if(num<0)
        printf("%d is Negative Number.", num);
    else
        printf("Zero");

    return 0;
}