#include<stdio.h>
#include<conio.h>

int main()
{    
    int var;
    printf("Enter var number: ");
    scanf("%d", &var);

    switch(var)
    {
        case 1:
            printf("Good");
            break;
        case 2:
            printf("Better");
            break;
        case 3:
            printf("Best");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}