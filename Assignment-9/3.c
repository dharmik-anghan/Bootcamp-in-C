#include <stdio.h>

int main()
{
    int n;
    printf("Enter day number between 1 to 28 : \n");
    scanf("%d", &n);
    

    switch (n)
    {
    case 1 ... 7:
        printf("Hey, good morning. How are you?");
        break;
    case 8 ... 14:
        printf("Good morning, have great day!");
        break;
    case 15 ... 21:
        printf("Morning...morning! Keep roaking");
        break;
    case 22 ... 28:
        printf("Don't worry it's last week.");
        break;
    default:
        printf("Enter date from 1 to 28\n");
    }

    return 0;
}