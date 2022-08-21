#include <stdio.h>

int LCM(int, int);
int main()
{
    int n1, n2, n;
    printf("Enter two number: ");
    scanf("%d%d", &n1, &n2);

    n = LCM(n1, n2);
    printf("%d", n);
    return 0;
}

int LCM(int n1, int n2)
{
    int n;
    n = n1>n2?n1:n2;

    while(1)
    {
        if(n%n1 == 0 && n%n2 == 0)
        {
            break;
        }
        n++;
    }
    return n;  
}