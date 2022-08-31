#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], copy[100];
    printf("Enter String: ");
    fgets(a, 100, stdin);
    int n = strlen(a)-1;

    for(int i  = 0; i < n; i++)
    {
        copy[i] = a[i];
    }

    for(int i = 0; i < n; i++)
        printf("%c", copy[i]);

    return 0;
}