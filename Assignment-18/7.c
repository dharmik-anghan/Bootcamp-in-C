#include <stdio.h>
#include <string.h>

void check(char a[])
{
    int n=strlen(a)-1;
    int i=0, j=n;

    while(i<=j) 
    {
        if(a[i] != a[j])
            break;
        i++;
        j--;
    }

    if(i > j)
        printf("Palindrom");
    else    
        printf("Not Plaindrom");
    
}
int main()
{
    char a[150] = "DsD";

    check(a);

    return 0;

}