#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*)malloc(sizeof(int));
    *ptr = 10;

    printf("Before Free %d\n", *ptr);

    free(ptr);

    printf("After Free %d", *ptr);

    return 0;
}