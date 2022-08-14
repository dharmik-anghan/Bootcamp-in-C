#include<stdio.h>
int main()
{
    int cost, sell, p_l;
    printf("Cost price: ");
    scanf("%d", &cost);
    printf("Selling price: ");
    scanf("%d", &sell);

    p_l = (sell - cost)*100/cost;

    if(p_l > 0)
        printf("Profit of %d percent.", p_l);
    else
        printf("Loss of %d percent.", p_l);

    return 0;

}