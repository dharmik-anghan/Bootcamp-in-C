#include <stdio.h>
#include <string.h>

void cmp(char a[], char b[])
{
    int n=strlen(a)-1, flag;

    for(int i =0; i <= n; i++)
    {
        if(a[i] == b[i]){
            flag=1;
        }
            
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        printf("Different");
    else    
        printf("Same");
}
int main()
{
    char a[150] = "Dharmik";
    char b[150] = "Dharmik";

    cmp(a,b);

}