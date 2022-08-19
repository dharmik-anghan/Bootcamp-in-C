#include <stdio.h>

int main()
{
    int onum, result, copy, reminder; 
    for(onum = 1; onum<=1000; onum++)
    {
        result = 0; //every time i want to start result with 0...
        copy = onum;
        while (copy != 0)
        {
            reminder = copy%10;
            result +=  reminder*reminder*reminder;
            copy /= 10; 
        } 

        if(result == onum)
                printf("%d ", result);
    }

    return 0;
}