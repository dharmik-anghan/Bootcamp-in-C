#include <stdio.h>

float area(int);

int main()
{
    int r;
    printf("Enter R: ");
    scanf("%d", &r);
    printf("%.2f", area(r));

    return 0;

}

float area(int r)
{
    float A = 3.14*r*r;
    return A;
}