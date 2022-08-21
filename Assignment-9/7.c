#include <stdio.h>

int main()
{
    int n;
    float a, total;
    printf("Enter UNITS : \n");
    scanf("%d", &n);
    

    switch (n)
    {
    case 1 ... 50:
        a = n*0.50;
        total = a*0.2 + a;
        printf("TOTAL AMOUNT IS %.2f", total);
        break;
    case 51 ... 150:
        a = (n - 50)*0.75 + 25;
        total = a*0.2 + a;
        printf("TOTAL AMOUNT IS %.2f", total);
        break;
    case 151 ... 250:
        a = (n-150)*1.20 + 100;
        total = a*0.2 + a;
        printf("TOTAL AMOUNT IS %.2f", total);
        break;
    default:
        a = (n-250)*1.50 + 220;
        total = a*0.2 + a;
        printf("TOTAL AMOUNT IS %.2f", total);
        break;
    }

    return 0;
}