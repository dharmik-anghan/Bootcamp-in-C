// Define a function to input variable length string and store it in an array without memory wastage.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)malloc(3 * sizeof(int));

    printf("Enter 3 Value: ");
    for(int i=0; i < 3; i++)
    {
        scanf("%d", &p[i]);
    }

    for(int i=0; i < 3; i++)
    {
        printf("\n%d", p[i]);
    }

    return 0;
}
