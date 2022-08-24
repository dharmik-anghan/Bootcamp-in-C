#include<stdio.h>

void even(int);

int main()
{
    int n;
    printf("NUMBER: ");
    scanf("%d", &n);

    even(n);

    return 0;
}

void even(int n)
{
    if(n==-1)
        return;
    even(n-1);
    printf("%d ", n*2);
}