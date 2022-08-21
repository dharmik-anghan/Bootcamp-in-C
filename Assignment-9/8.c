#include <stdio.h>

int main()
{
    int n,a;
    printf("Enter Number : \n");
    scanf("%d", &n);
    
    a = n>0? 1:0;

    switch (a)
    {
    case 0:
        n = -1*n;
        printf("%d", n);
        break;
    case 1:
        n *= -1;
        printf("%d", n);        
    }
    return 0;
}