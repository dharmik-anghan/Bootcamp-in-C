#include <stdio.h>

int main(void)
{
    printf("Date: ");
    int dd, mm, yyyy;
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("Day-%d, Month-%d, Year-%d\n", dd, mm, yyyy);
    return 0;
}
