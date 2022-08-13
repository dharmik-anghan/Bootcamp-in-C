#include <stdio.h>

int main(void)
{
    printf("Date: ");
    int HH, MM;
    scanf("%d:%d", &HH, &MM);

    printf("%d hour and %d Minute\n", HH, MM);
    return 0;
}
