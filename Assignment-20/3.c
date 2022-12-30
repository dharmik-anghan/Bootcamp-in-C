#include <stdio.h>

void sort(int *ptr, int size)
{
    for(int i=0; i < size-1; i++)
    {
        for(int j=i; j <size; j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}

int main()
{
    int a[10] = {10,4,5,6,3,74,72,35,1,0};

    sort(a, 10);

    for(int i=0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}