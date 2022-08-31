#include <stdio.h>
#include <string.h>

int main()
{
    char a[256] = "Dharmikk ";
    int frq[256] = {0};

    for(int i=0; a[i] != '\0'; i++)
    {
        frq[a[i]]++;
    }

    for(int i=0; a[i]; i++)
    {
        if(frq[a[i]])
        {
            printf("%c %d\n", a[i], frq[a[i]]);
            frq[a[i]] = 0;
        }
    }

    return 0;
}