#include <stdio.h>

int count(int);
int main()
{
    int n;
    printf("VALUE: ");
    scanf("%d", &n);

    count(n);
    return 0;
}

int count(int n)
{
    count(n/10);   
}
