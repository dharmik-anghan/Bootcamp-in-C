#include<stdio.h>

int binary(int);

int main()
{
    int n;
    printf("NUMBER: ");
    scanf("%d", &n);

    binary(n);

    return 0;
}

int binary(int n)
{
    int s;
    if(n==0)
        return 1;
    if(n%2 != 0)
        s=1;
    else
        s=0;
    binary(n%2);
    
    
    printf("%d ", s);

    return s;

}
