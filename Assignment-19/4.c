#include <stdio.h>
#include <string.h>

int main()
{
    char s[5][10] = {"Mohit", "Dharmik", "Naman", "Bhargav", "MySirG"};
    int v=0;
    

    for(int i=0; i<5;i++)
    {
        if(strcmp(s[i], "Dharik") == 0)
        {
            v = 1;
        }
            
    }

    if(v==1)
        printf("Found!");
    else    
        printf("String not Found!");

    return 0;
}