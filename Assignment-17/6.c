#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);
    int n = strlen(str)+1;
    char temp[n];
    int i=0, j=strlen(str);
    
    while(j>=0 || i <= n)
    {
        temp[i] = str[j];
        i++;
        j--;
    }
    
    for(int i = 0; i < n; i++)
        printf("%c", temp[i]);

    return 0;
}