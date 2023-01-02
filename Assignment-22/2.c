//Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include <stdio.h>
#include <string.h>

struct employee 
{
    int id;
    char name[50];
    float salary;
}e1;

struct employee input()
{
    struct employee b;
    printf("Enter ID, Name and Salary: ");
    scanf("%d", &b.id);
    fflush(stdin);
    fgets(b.name, 50, stdin);
    b.name[strlen(b.name)-1] = '\0';
    scanf("%f", &b.salary);

    return b;
}

void display(struct employee b)
{
    printf("ID     = %d\nName   = %s\nSalary = %2.f\n", b.id,b.name,b.salary);
}

int main()
{
    e1= input();
    display(e1);

    return 0;
}