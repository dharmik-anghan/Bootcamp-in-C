#include <stdio.h>
#include <string.h>

void lower(char a[])
{
    int n=strlen(a)-1, flag;

    for(int i =0; i <= n; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i] += 32;   
    }

    printf("%s", a);
}
int main()
{
    char a[150] = "Dharmik";

    lower(a);

}