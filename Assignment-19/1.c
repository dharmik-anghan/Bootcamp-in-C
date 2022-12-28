#include <stdio.h>

int count_vovels(char n[]);

int main()
{
    printf("Enter 5 name: - \n");
    char n[5][20];

    for(int i =0; i < 5; i++)
    {
        fgets(n[i], 20, stdin);
    }

    printf("\n");

    for(int i=0; i<5; i++)
    {
        int value = count_vovels(n[i]);
        printf("%d) %d\n", i+1 , value);
        // printf("%s\n" , n[i]);
    }
}

int count_vovels(char n[])
{
    int value=0, i=0;

    while(n[i] != '\0')
    {
        if(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' || n[i] == 'A' || n[i] == 'E' || n[i] == 'O' || n[i] == 'I' || n[i] == 'U')
            value++;

        i++;
    }

    return value;
}
