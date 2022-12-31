// Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
// struct employee e[] = {{1, "Dharmik", 25345.50}, {2, "Bharatbhai", 3453450},{3, "MySirG", 435340},{4, "Mahesh", 8327},{5, "Rakesh", 23310},{6, "Pratik", 233250},{7, "Mortal", 51250},{8, "Scout", 3112120},{9, "Deepali", 87654.50},{10, "Kashvi", 25350},};

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

void sortbyprice(struct employee e[], int size)
{
    int i, j;
    struct employee temp;

    for(int i = 0; i < size; i++)
    {
        for(int j=i; j < size; j++)
        {
            if(e[i].salary < e[j].salary)
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

    sortbyprice(e,10);

    display(e[0]);
    
    return 0;
}