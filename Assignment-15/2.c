#include <stdio.h>

int lwst(int arry[], int n);

int main()
{
    int n;
    printf("How many number you wanna enter?\n");
    scanf("%d", &n);
    int lowest[n];
    printf("Enter Values: ");
    
    //Taking value in array
    for(int i = 0; i < n; i++)
        scanf("%d", &lowest[i]);

    printf("Ans is %d", lwst(lowest,n));
    
}

int lwst(int arry[], int n)
{
    int mini = 99999999;

    for(int i = 0; i < n; i++)
    {
        if(mini>arry[i])
            mini = arry[i];
    }

    return mini;
}