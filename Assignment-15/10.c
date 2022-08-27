#include <stdio.h>
int fre(int n[], int a[]);

int main()
{
    int n[9] = {1, 2, 3, 4, 4, 2, 3, 5, 6}, count=1;

    int a[10] = {0, 0, 0, 0, 0, 0 ,0 , 0, 0, 0};

    fre(n, a);

    for(int i = 0; i < 10; i++)
    {
        if(a[i] != 0)
        {
            printf("%d = %d\n", i, a[i]);
        }
    }
    return 0;
}

int fre(int n[], int a[])
{
    int count=1;
    for(int i = 0; i < 9; i++)
    {
        count=1;
        a[n[i]] += count++;
        
    } 
}
