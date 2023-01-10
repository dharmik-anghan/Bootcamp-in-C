#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, sum=0;
    printf("How many number you wanna enter?\n");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation Failded");
        return 0;
    }

    for(int i=0; i < n; i++)
    {
        scanf("%d", ptr+i);
    }

    for(int i=0; i < n; i++)
    {
        sum += ptr[i];

        printf("%d = %d\n",i, *(ptr+i));
    }

    printf("\n%d", sum);

    free(ptr);
    

    return 0;
}