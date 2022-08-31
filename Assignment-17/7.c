#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Enter String: ");
    fgets(a, 100, stdin);
    int n = strlen(a)-1, alpha=0, digit=0, sc=0;

    for(int i  = 0; i < n; i++)
    {
        if(((a[i]>= 'a') && (a[i]<='z')) || ((a[i]>= 'A') && (a[i]<='Z')))
            alpha++;
        else if(a[i]>= '0' && a[i]<='9')
            digit++;
        else
            sc++;
    }

    printf("ALPHABETS   : %d\n", alpha);
    printf("DIGITS      : %d\n", digit);
    printf("SPECIAL CHAR: %d\n", sc);

    return 0;
}