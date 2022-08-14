#include<stdio.h>
int main()
{
    int math, sci , phy, c, cpp, result;
    printf("Maths: ");
    scanf("%d", &math);
    printf("Sci  : ");
    scanf("%d", &sci);
    printf("Phy  : ");
    scanf("%d", &phy);
    printf("C    : ");
    scanf("%d", &c);
    printf("Cpp  : ");
    scanf("%d", &cpp);

    result = ((math+sci+phy+c+cpp)*100)/500;

    if(result >= 33)
        printf("You passed with %d", result);
    else
        printf("Better luck next time!");

    return 0;

}