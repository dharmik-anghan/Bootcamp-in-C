#include <stdio.h>

int main()
{
    int sort[10], temp;
    printf("Enter 10 number: \n");

    for(int i = 0; i < 10; i++)
        scanf("%d", &sort[i]);
    
    for(int i = 0; i <9; i++)
    {
        for(int j=i+1; j < 10; j++)
        {
            if(sort[i]>sort[j])
            {
                temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
    printf("%d ", sort[8]);
    
    return 0;
}
