#include <stdio.h>

int gret(int arry[], int n);

int main()
{
    int n;
    printf("How many number you wanna enter?\n");
    scanf("%d", &n);
    int grt[n];
    printf("Enter Values: ");
    
    //Taking value in array
    for(int i = 0; i < n; i++)
        scanf("%d", &grt[i]);

    printf("Ans is %d", gret(grt,n));
    
}

int gret(int arry[], int n)
{
    int max = -99999999;

    for(int i = 0; i < n; i++)
    {
        if(max<arry[i])
            max = arry[i];
    }

    return max;
}