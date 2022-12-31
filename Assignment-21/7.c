#include <stdio.h>

struct time{
    int sec;
    int min;
    int hour;
}start, end, diff;

int main()
{
    int i=0;
    
    printf("Enter Start Time:\nFormat Should be: HH:MM:SS\n");
    scanf("%d %d %d", &start.hour, &start.min, &start.sec);
    
    printf("Enter End Time:\nFormat Should be: HH:MM:SS\n");
    scanf("%d %d %d", &end.hour, &end.min, &end.sec);

    if(end.sec < start.sec)
    {
        --end.min;
        diff.sec = (end.sec+60) - start.sec;
    }
    else
        diff.sec = end.sec - start.sec;
    
    if(end.min < start.min)
    {
        --end.hour;
        diff.min = (end.min+60) - start.min;
    }
    else
        diff.min = end.min - start.min;

    if(end.hour > start.hour)
    {
        diff.hour = end.hour - start.hour;
        i = 1;
    }

    printf("Difference is %2d:%2d:%2d", diff.hour, diff.min, diff.sec);
    
}