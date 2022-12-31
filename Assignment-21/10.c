#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

struct student input()
{
    struct student s;

    printf("Enter Roll No and Name: \nEnter Chemistry, Maths and Physics marks: ");
    scanf("%d", &s.roll_no);

    fflush(stdin);
    fgets(s.name, 30, stdin);

    scanf("%f", &s.chem_marks);
    scanf("%f", &s.maths_marks);
    scanf("%f", &s.phy_marks);

    return s;
}

void display(struct student s)
{
    float percentge = ((s.chem_marks+s.maths_marks+s.phy_marks)/300)*100;

    printf("\nRoll No   : %d\nName      : %sPercentage: %.2f\n", s.roll_no, s.name, percentge);
}

int main()
{
    struct student s[5];

    for(int i=0; i < 5; i++)
    {
        s[i] = input();
    }

    for(int i =0; i < 5; i++)
        display(s[i]);

    return 0;    
}