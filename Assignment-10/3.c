#include <stdio.h>

int oddeven(int);
int main()
{
    int n,result;
    printf("Enter number: ");
    scanf("%d", &n);

    result = oddeven(n);

    if(result == 0)
        printf("%d is even", n);
    else    
        printf("%d is odd", n);

    return 0;
    
}

int oddeven(int n)
{
    if (n%2 == 0)
        return 0;
    else
        return 1;
}
