#include <stdio.h>


int main()
{
    int gretest[10], max = -1;
    printf("Enter 10 number: \n");

    for(int i = 0; i < 10; i++)
        scanf("%d", &gretest[i]);
    
    for(int i =0; i < 10; i++)
    {
        if(max<gretest[i])
            max = gretest[i];
    }

    printf("Ans is %d", max);

}

