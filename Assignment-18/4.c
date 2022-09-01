#include <stdio.h>
#include <string.h>

void upper(char a[])
{
    int n=strlen(a)-1, flag;

    for(int i =0; i <= n; i++)
    {
        if(a[i]>='a' && a[i]<='z')
            a[i] -= 32;   
    }

    printf("%s", a);
}
int main()
{
    char a[150] = "Dharmik";

    upper(a);

}