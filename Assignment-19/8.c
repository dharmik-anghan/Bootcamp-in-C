#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char n[5][20] = {"the", "quick", "brown", "fox", "quick"};
    char word1[]= "the";
    char word2[]= "fox";

    int w1=-1, w2=-1, min=1000, temp;

    for(int i=0; i<5;i++)
    {
        if(strcmp(n[i], word1) == 0)
            w1=i;

        if(strcmp(n[i], word2) == 0)
            w2=i;   

        if((w1 != -1) && (w2 != -1))
        {
            temp = abs(w1-w2);

            if(temp < min)
                min=temp;
        }
    }

    printf("OUTPUT: %d ", min-1);
    return 0;
}