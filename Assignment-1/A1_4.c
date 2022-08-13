#include <stdio.h>

int main(void)
{
    int r;
    float a;
    printf("Enter Radius: ");

    scanf("%d", &r);
    a = 3.14*r*r;
    printf("Area of circle is %.2f having the radius %d\n", a, r);
    return 0;
}
