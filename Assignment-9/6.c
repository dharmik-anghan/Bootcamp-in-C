#include<stdio.h>
#include<conio.h>

int main()
{    
    int year, remainder;
    printf("Enter Year to check: ");
    scanf("%d", &year);

    remainder=((year%4==0)&&((year%400==0)||(year%100!=0)));

    switch(remainder)
    {
        case 0:
            printf("Not leap Year");
            break;
        case 1:
            printf("Leap Year");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}