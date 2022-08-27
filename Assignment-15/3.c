#include <stdio.h>

int sort(int arry[],int i, int j);


int main()
{
    int n;
    printf("How many number you wanna enter?\n");
    scanf("%d", &n);
    int sorting[n];
    printf("Enter Values: ");
    
    //Taking value in array
    for(int i = 0; i < n; i++)
        scanf("%d", &sorting[i]);

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(sorting[i]>sorting[j])
                sort(sorting, i, j);
        }
    }
    for(int i =0; i < n; i++)
    {
        printf("%d ", sorting[i]);
    }

    
    
}

int sort(int arry[],int i, int j)
{
    int temp = arry[i];
    arry[i] = arry[j];
    arry[j] = temp;
}