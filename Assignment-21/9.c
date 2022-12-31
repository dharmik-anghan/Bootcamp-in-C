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
    int n;
    printf("How many Students you want to enter? ");
    scanf("%d", &n);
    
    struct student s[n];

    for(int i=0; i < n; i++)
    {
        s[i] = input();
    }

    for(int i =0; i < n; i++)
        display(s[i]);

    return 0;    
}