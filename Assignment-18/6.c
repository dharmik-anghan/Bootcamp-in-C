#include <stdio.h>
#include <string.h>

void an(char a[])
{
    int n=strlen(a)-1, alpha, num;

    for(int i =0; i <= n; i++)
    {
        if((a[i]>='A' && a[i]<='Z') || (a[i]>='A' && a[i]<='Z'))
            alpha = 1;
        else if(a[i]>= '0' && a[i]<= '9')
            num=1;   
    }
    if(alpha == 1 && num==1)
        printf("String is alphanumeric");
    else
        printf("Not Alphanumeric");
}
int main()
{
    char a[150] = "Dharmi1k";

    an(a);

    return 0;

}