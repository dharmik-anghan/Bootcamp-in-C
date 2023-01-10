#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
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

    for(int i=0; i < n-1; i++)
    {
        for(int j=i; j < n; j++)
        {
            if(ptr[i] <= ptr[j])
            {
                int t = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = t;
            }
        }
    }

    printf("\n\nMAX = %d,\n MIN = %d", *(ptr+0), *(ptr+n-1));
    free(ptr);
    

    return 0;
}