#include <stdio.h>

int interest(int , int );
int main()
{
    int value, percent;
    printf("Enter amount : ");
    scanf("%d", &value);
    printf("Enter Percentage: ");
    scanf("%d", &percent);

    printf("Total Value: %d", interest(value, percent));

    return 0;

}

int interest(int a, int b)
{
    int total = a + (a*b/100);
    return total;
}