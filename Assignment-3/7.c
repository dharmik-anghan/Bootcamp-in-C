#include <stdio.h>

int main()
{
    int a ,b, c;
    printf("Enter Equation: ");
    scanf("%dx^2+%dx+%d", &a, &b, &c);

    int d = b*b - 4*a*c;
    if(d > 0)
        printf("Real and Distinct");
    else if(d == 0)
        printf("Real and Equal");
    else
        printf("Imaginary root");

    return 0;
}