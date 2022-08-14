#include<stdio.h>

int main()
{
    int a;
    printf("Enter Month number: ");
    scanf("%d", &a);

    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
        printf("Month has 31 days.");
    else if(a==4 || a==6 || a==9 || a==11)
        printf("Month has 30 days.");
    else
        printf("Month has 28 days.(not leap year)");


    return 0;
}