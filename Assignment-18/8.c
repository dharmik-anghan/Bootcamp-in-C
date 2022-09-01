#include <stdio.h>
#include <string.h>

void word(char a[])
{
    int n=strlen(a)-1, word=1, num;

    for(int i =0; i < n; i++)
    {
        if(a[i] == ' ' && a[i+1] != ' ')
            word += 1; 
    }
    
    printf("%d", word);
}
int main()
{
    char a[150] = "Dha   rm    i1     k    ";

    word(a);

    return 0;

}