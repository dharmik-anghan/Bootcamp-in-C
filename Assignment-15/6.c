#include <stdio.h>

void reverse(int num[], int );
  
int main()
{
    int n;
    printf("How many value? ");
    scanf("%d", &n);
    int num[n];
    printf("Enter number: \n");

    for(int i=0; i < n; i++)
        scanf("%d", &num[i]);

    printf("Original Order: \n");
    for(int i=0; i < n; i++)
        printf("%d ", num[i]);

    printf("\n");

    reverse(num,n);
}

void reverse(int num[], int n)
{
    printf("Reverse Order: \n");
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    
}
