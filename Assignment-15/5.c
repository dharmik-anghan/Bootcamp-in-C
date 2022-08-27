#include <stdio.h>

void occurrence(int num[]);
int main()
{
    int num[10] = {1, 2, 3, 3, 6, 8, 7, 7, 9, 0};

    occurrence(num);
}

void occurrence(int num[])
{
    int flag=0;
    for(int i = 0; i < 9; i++)
    {
        if(num[i] == num[i+1])
        {
            printf("%d",num[i]);
            flag = 1;
            break;
        }
    }
    if(flag=0)
        printf("No occurrence");

}
