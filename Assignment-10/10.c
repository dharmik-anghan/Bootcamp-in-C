#include <stdio.h>

void primefactors(int);

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    primefactors(num);
    return 0;
    
}

void primefactors(int num)
{
    int a,i=2;
    while(num != 1)
    {
        a = num%i;
        if(a == 0)
        {
            printf("%d ", i);
            num/=i;
            i=2;
        }
        else    
            i++;
    }
}