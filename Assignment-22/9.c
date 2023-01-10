#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, sum=0;
    printf("Enter SUM size: ");
    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(int));
    
    if(p == NULL)
    {
        printf("Meomory Allocation Failded\n");
        return 0;
    }

    for(int i=0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    for(int i=0; i < n; i++)
        sum += p[i];

    free(p);
    
    printf("SUM is %d", sum);

    return 0;
}