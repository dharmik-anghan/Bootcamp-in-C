#include <stdio.h>
#include <string.h>

void repeat(char a[])
{
    int frq[256] = {0};

    for(int i=0; a[i] != '\0'; i++)
    {
        frq[a[i]]++;
    }

    for(int i=0; a[i]; i++)
    {
        if(frq[a[i]]>1)
        {
            printf("%c %d\n", a[i], frq[a[i]]);
            frq[a[i]] = 0;
        }
    }
}
int main()
{
    char a[256] = "qwzxfwcvsaaatyuiop ";

    repeat(a);

    return 0;
}
