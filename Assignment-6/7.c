#include <stdio.h>

int main()
{
    int n;
    printf("Enter: ");
    scanf("%d",&n);
   
    int number = 0;
    do
    {
        n /= 10;
        number++;
    }
    while (n != 0);
    
    printf("There are %d digits.", number);

    return 0;
}