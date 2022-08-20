// Write a function to check whether a given number contains a given digit or not.
// (TSRS)

#include <stdio.h>

int checkdigit(int, int);

int main()
{
    int num, digit, result;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter digit: ");
    scanf("%d", &digit);

    result = checkdigit(num, digit);
    if(result == 1)
        printf("digit available.");
    else
        printf("digit not available");

    return 0;
    
}

int checkdigit(int num, int digit)
{
    int a;
    while(num)
    {
        a = num%10;
        if(a == digit)
            return 1;   
        num/=10;
    }
    return 0;
}