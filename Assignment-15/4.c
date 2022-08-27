#include <stdio.h>

int main()
{
    int array[5] = {32, 29, 40, 12, 70};
    int d = 2, temp;
    
    printf("Left Side: \n");
    temp = array[0];
    for(int i = 0; i < 5; i++)
    {
        array[i] = array[i+1];
    }
    array[5]=temp;

    for(int i = 0; i < 5; i++)
        printf("%d ", array[i]);
    
    
    printf("\n");


    printf("Right Side: \n");
    temp = array[5];
    for(int i = 5; i > 0; i--)
    {
        array[i] = array[i-1];
    }
    array[0]=temp;

    for(int i = 0; i < 5; i++)
        printf("%d ", array[i]);

    return 0;
}