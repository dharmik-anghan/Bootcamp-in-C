#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
};

struct student input()
{
    struct student s;

    printf("Enter Roll No and Name: ");
    scanf("%d", &s.roll_no);

    fflush(stdin);
    fgets(s.name, 30, stdin);

    return s;
}

void display(struct student s)
{
    printf("\nRoll No: %d\nName   : %s\n", s.roll_no, s.name);
}

int main()
{
    struct student s[10];

    for(int i=0; i < 10; i++)
    {
        s[i] = input();
    }

    for(int i =0; i < 10; i++)
        display(s[i]);

    return 0;    
}