#include <stdio.h>

int main()
{
    int sum[10], s = 0;
    printf("Enter 10 number: \n");

    for(int i = 0; i < 10; i++)
        scanf("%d", &sum[i]);
    
    for(int i = 0; i < 10; i++)
        s = s + sum[i];

    printf("Ans is %d", s/10);

}