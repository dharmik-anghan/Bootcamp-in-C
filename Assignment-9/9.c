#include <stdio.h>

int main()
{
    int n,a;
    printf("Enter Number : \n");
    scanf("%d", &n);
    
    a = n%2!=0 ? 0:1;

    switch (a)
    {
    case 0:
        printf("ALREADY ODD NUMBER");
        break;
    case 1:
        printf("%d", n+1);        
    }
    return 0;
}