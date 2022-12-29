#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
    char n[5][20] = {"the", "quick", "brown", "fox", "quick"};
    char word[20];
    int k=0;

    printf("Enter Username: ");
    gets(word);
    for(int i=0; i<5;i++)
    {
        if(strcmp(n[i], word) == 0)
        {
            int fact, result=1;
            printf("\nEnter number: ");
            scanf("%d", &fact);

            if((fact == 0) || (fact == 1))
                printf("Ans is 1\n");
            else
                {
                    int i=fact-1;
                    while(i >= 1)
                    {
                        fact = fact*i;
                        i--;
                        
                    }
                    printf("Ans is %d\n", fact);
                } 

            k=1;
            break;
        }
    }

    if(k==0)
        printf("Username not found!\n");

    return 0;
}
