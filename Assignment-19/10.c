#include <stdio.h>
#include <string.h>

int main()
{
    char urps[4][2][20] = {{"dharmik", "123"}, {"mysirg", "456"}, {"pratik", "789"}, {"hello", "101"}};
    char user[20];
    char pass[20];
    int k=0;

    printf("Enter Username: ");
    gets(user);

    for(int i=0; i < 4; i++)
    {
        if(strcmp(urps[i][0], user) == 0)
        {
                printf("Enter Password: ");
                gets(pass);
                k=1;
                break;
        }  
    }

    if(k==0)
        printf("Username not exist");

    if(k==1)
    {
        for(int i=0; i < 4; i++)
        {
            if(strcmp(urps[i][1], pass) == 0)
            {
                 printf("Login Succesfully");
                 k=2;
            }
        }
    }
    
    if(k==1)
        printf("Wrong Password");

    return 0;
}
