//Define a structure Employee with member variables id, name, salary

#include <stdio.h>
#include <string.h>

struct employee 
{
    int id;
    char name[50];
    float salary;
}e2;

int main()
{
    struct employee e1 = {123, "Dharmik", 25345.50};

    e2.id = 124;
    strcpy(e2.name ,"MysirG");
    e2.salary = 30002.2;

    printf("%d %s %.2f", e1.id, e1.name, e1.salary);
    printf("\n%d %s %.2f", e2.id, e2.name, e2.salary);

    return 0;
}
