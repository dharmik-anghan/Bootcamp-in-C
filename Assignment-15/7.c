#include <stdio.h>

void count(int num[]);
int main()
{
    int num[10] = {1, 1, 3, 2, 4, 2, 5, 9 ,7, 1};

    count(num);
}

void count(int num[])
{
    int count = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = i+1; j < 9; j++)
        {
            if(num[i] == num[j])
                count++;
        }
    }
    printf("%d", count);
}
