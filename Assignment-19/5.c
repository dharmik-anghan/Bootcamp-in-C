#include <stdio.h>
#include <string.h>

int main()
{
    char s[3][50] = {"dharmikanghan09mail.com", "dharmikanghan02@gmail.com", "anghandharmik08@gmail.com"};
    
    for(int i=0; i < 3; i++)
    {
        if(strchr(s[i], '@')!= 0)
        {
            printf("%s\n", s[i]);
        }        
    }
        
    return 0;
}