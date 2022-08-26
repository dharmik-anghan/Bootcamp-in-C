#include <stdio.h>

int main()
{
    int sum[10], se = 0, so = 0;
    printf("Enter 10 number: \n");

    for(int i = 0; i < 10; i++)
        scanf("%d", &sum[i]);
    
    for(int i = 0; i < 10; i++)
    {
        if(sum[i]%2==0)
            se = se + sum[i];
        else
            so = so + sum[i];
    }

    printf("Sum of even is %d\n", se);
    printf("Sum of odd is %d\n", so);

}