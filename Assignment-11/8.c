// #pascal
#include <stdio.h>
int fact(int);
int combi(int, int);
void printpascal(int);

int main()
{
    int n;
    printf("Height: ");
    scanf("%d", &n);
    printpascal(n);
}

int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f *= n;
        n--;
    }
    return f;
}

int combi(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}

void printpascal(int line)
{
    int k, r;
    for (int i = 1; i <= line; i++)
    {
        k=1;
        r=0;
        for (int j = 1; j<=2*line-1; j++)
        {
            if(j>=line+1-i && j <= line-1+i && k)
            {
                printf("%2d", combi(i-1,r));
                k=0; r++;
            }
            else{
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}

