#include<stdio.h>
int main()
{
    int num;
    printf("Enter Value: ");
    scanf("%d", &num);

    if(num%7 == 0 && num%3==0)
        printf("%d is divisible by 7 or 3.", num);
    else
        printf("It is not divisible by 7 or 3.");

    return 0;
}