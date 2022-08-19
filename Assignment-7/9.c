#include <stdio.h>

int main()
{
    int onum, result=0, copy, reminder; 
    printf("Enter Number: ");
    scanf("%d", &onum);
    copy = onum;
    do
    {
        reminder = onum%10;
        result +=  reminder*reminder*reminder;
        onum /= 10;
        
    } while (onum != 0);

    if(result = copy)
        printf("ArmStrong Number");
    else
        printf("Not ArmStrong Number");

    return 0;
}