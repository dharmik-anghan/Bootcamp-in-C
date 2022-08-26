#include <stdio.h>


int main()
{
    int sml[10], max = 999999999;
    printf("Enter 10 number: \n");

    for(int i = 0; i < 10; i++)
        scanf("%d", &sml[i]);
    
    // for(int i =0; i < 10; i++)
    // {
    //     if(max>sml[i])
    //         max = sml[i];
    // }

    for(int i = 0; i < 10; i++)
    {
        if(max > sml[i])
            max = sml[i];
    }

    printf("Ans is %d", max);

    return 0;

}

