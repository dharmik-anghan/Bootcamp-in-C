#include <stdio.h>

int main()
{
    int rev[10], temp;
    printf("Enter 10 number: \n");
    for(int i = 0; i <10; i++)
        scanf("%d", &rev[i]);

    for(int i = 9; i >= 0; i--)
    {
        printf("%d ", rev[i]);        
    }
    return 0;
}