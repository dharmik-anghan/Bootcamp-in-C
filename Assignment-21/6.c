#include <stdio.h>
#include <string.h>

struct employee 
{
    int id;
    char name[50];
    float salary;
}e[5];

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
    printf("\nID     = %d\nName   = %s\nSalary = %2.f\n", b.id,b.name,b.salary);
}

void sortbyname(struct employee e[], int size)
{
    int i, j;
    struct employee temp;

    for(int i = 0; i < size-1; i++)
    {
        for(int j=i; j < size; j++)
        {
            if(strcmp(e[i].name, e[j].name) > 0)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;

            }
        }
    }
}

int main()
{
    for(int i =0; i < 5; i++)
    {
        e[i] = input();
    }

    sortbyname(e,5);

    for(int i=0; i < 5; i++)
        display(e[i]);
    
    return 0;
}