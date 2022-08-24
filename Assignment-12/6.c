#include<stdio.h>

void reveven(int);

int main()
{
    int n;
    printf("NUMBER: ");
    scanf("%d", &n);

    reveven(n);

    return 0;
}

void reveven(int n)
{
    if(n==-1)
        return;
    printf("%d ", n*2);
    reveven(n-1);
}