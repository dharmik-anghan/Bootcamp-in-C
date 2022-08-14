#include<stdio.h>
int main()
{
    int num;
    printf("Enter Value: ");
    scanf("%d", &num);

    if(num%3 == 0 && num%2==0)
        printf("%d is divisible by 3 and 2.", num);
    else
        printf("It is not divisible by 3 and 2.");

    return 0;
}