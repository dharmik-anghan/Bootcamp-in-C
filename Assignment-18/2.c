#include <stdio.h>
#include <string.h>

void rev(char a[])
{
    int temp;
    int n=strlen(a)-1;

    for(int i =0; i < (n/2)+1; i++)
    {
        temp = a[i];
        a[i] = a[n-i];
        a[n-i] = temp;
    }
    printf("%s", a);
}
int main()
{
    char a[150] = "zyxwvutsrqponmlkjihgfedcba";

    rev(a);

}