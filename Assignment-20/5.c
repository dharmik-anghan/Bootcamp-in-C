#include <stdio.h>

void mini(int *ptr, int size)
{
    for(int i=0; i < size-1; i++)
    {
        for(int j=i; j<size; j++)
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
    int a[10] = {10,4,5,6,30,74,72,35,10,11};

    mini(a, 10);

    printf("%d", a[0]);
}