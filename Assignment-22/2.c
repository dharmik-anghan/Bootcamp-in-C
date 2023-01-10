#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, avg=0, multi=1;

    printf("How many you would like to enter? ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));

    if(p == NULL)
    {
        printf("Memory Allocation Failded");
        return 0;
    }

    for(int i=0; i < n; i++)
    {
        scanf("%d", p+1);
    }
    
    for(int i=0; i < n; i++)
    {
        avg += p[i];
    }
    free(p);

    printf("Average = %.2f\n", (float)avg/n);

    return 0;
}